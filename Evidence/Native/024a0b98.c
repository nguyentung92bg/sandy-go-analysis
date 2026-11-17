/* IL2CPP: Dino.BusSand.View.GameView$$Tap
int32_t Dino_BusSand_View_GameView__Tap (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector2_o screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$Tap
   int32_t Dino_BusSand_View_GameView__Tap (Dino_BusSand_View_GameView_o* __this,
   UnityEngine_Vector2_o screen, const MethodInfo* method); */

int Dino_BusSand_View_GameView__Tap_23a0b98(undefined4 param_1,undefined4 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
                    /* try { // try from 024a0b9c to 025a0b9f has its CatchHandler @ 024a13c4 */
  iVar1 = Dino_BusSand_View_GameView__PickRoadBus_23a0e24();
                    /* try { // try from 024a0bb4 to 025a0bb7 has its CatchHandler @ 024a0bbc */
                    /* try { // try from 024a0bb8 to 025a0bd7 has its CatchHandler @ 024a084c */
                    /* catch() { ... } // from try @ 024a0bb4 with catch @ 024a0bbc */
                    /* catch() { ... } // from try @ 024a0b80 with catch @ 024a0bc0 */
                    /* catch() { ... } // from try @ 024a0b68 with catch @ 024a0bc4 */
                    /* try { // try from 024a0bd8 to 025a0bdb has its CatchHandler @ 024a13ac */
  if (((-1 < iVar1) && (lVar3 = *(long *)(param_3 + 0x90), lVar3 != 0)) &&
     (uVar2 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),iVar1,*(undefined8 *)(lVar3 + 0x28)),
     (uVar2 & 1) != 0)) {
    return iVar1;
  }
                    /* try { // try from 024a0bdc to 025a0c5b has its CatchHandler @ 024a084c */
  iVar1 = Dino_BusSand_View_GameView__PickYard_23a1138(param_1,param_2,param_3);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    lVar3 = *(long *)(param_3 + 0x88);
    if ((lVar3 == 0) ||
       (uVar2 = (**(code **)(lVar3 + 0x18))
                          (*(undefined8 *)(lVar3 + 0x40),iVar1,*(undefined8 *)(lVar3 + 0x28)),
       (uVar2 & 1) == 0)) {
      Dino_BusSand_View_GameView__TapVehicle_23a151c(param_3,iVar1);
    }
  }
  return iVar1;
}

