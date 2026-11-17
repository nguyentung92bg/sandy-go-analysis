/* IL2CPP: Dino.BusSand.View.VehicleView$$ExitLaunch
void Dino_BusSand_View_VehicleView__ExitLaunch (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$ExitLaunch
   void Dino_BusSand_View_VehicleView__ExitLaunch (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_VehicleView__ExitLaunch_23fe454(long param_1)

{
  float fVar1;
  float fVar2;
  
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024fe224 with catch @ 024fe454
                        */
  if (*(int *)(param_1 + 0x2c) == 4) {
                    /* try { // try from 024fe470 to 025fe473 has its CatchHandler @ 024fe480 */
                    /* catch() { ... } // from try @ 024fe470 with catch @ 024fe480 */
                    /* try { // try from 024fe484 to 025fe48b has its CatchHandler @ 024fe494 */
    fVar1 = *(float *)(param_1 + 0x1e4);
    if (*(float *)(param_1 + 0x1e4) <= _UNK_00e208b0) {
      fVar1 = _UNK_00e208b0;
    }
                    /* try { // try from 024fe48c to 025fe497 has its CatchHandler @ 024fe068 */
    fVar2 = *(float *)(param_1 + 0x188) + _UNK_00e20584;
    *(float *)(param_1 + 0x198) = *(float *)(param_1 + 0x198) + -75.0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024fe484 with catch @ 024fe494
                        */
    *(float *)(param_1 + 0x1e4) = fVar1;
    *(float *)(param_1 + 0x188) = fVar2;
  }
  return;
}

