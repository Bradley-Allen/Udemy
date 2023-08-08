import ChartBar from "./ChartBar";
import "./Chart.css";

function Chart(props) {
  const dataPointValues = props.dataPoints.map((dataPoint) => dataPoint.value);
  // const totalMaximum = Math.max(...dataPointValues); // Shade bars relative to highest price

  // Shade bars relative to total
  let totalMaximum = 0;
  for (const value of dataPointValues) {
    totalMaximum += parseInt(value);
    console.log(totalMaximum);
  }

  return (
    <div className="chart">
      {props.dataPoints.map((dataPoint) => (
        <ChartBar
          key={dataPoint.label}
          value={dataPoint.value}
          maxValue={totalMaximum}
          label={dataPoint.label}
        />
      ))}
    </div>
  );
}

export default Chart;
