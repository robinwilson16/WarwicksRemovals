using Microsoft.EntityFrameworkCore.Migrations;

namespace WarwicksRemovals.Data.Migrations
{
    public partial class AddIsEnabledandSOrtOrderToSelectListData : Migration
    {
        protected override void Up(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.AddColumn<bool>(
                name: "IsEnabled",
                table: "SelectListData",
                nullable: false,
                defaultValue: false);

            migrationBuilder.AddColumn<int>(
                name: "SortOrder",
                table: "SelectListData",
                nullable: false,
                defaultValue: 0);
        }

        protected override void Down(MigrationBuilder migrationBuilder)
        {
            migrationBuilder.DropColumn(
                name: "IsEnabled",
                table: "SelectListData");

            migrationBuilder.DropColumn(
                name: "SortOrder",
                table: "SelectListData");
        }
    }
}
