/* IL2CPP: Dino.BusSand.View.GameView$$TickIdleHint
void Dino_BusSand_View_GameView__TickIdleHint (Dino_BusSand_View_GameView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$TickIdleHint
   void Dino_BusSand_View_GameView__TickIdleHint (Dino_BusSand_View_GameView_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_View_GameView__TickIdleHint_23a17e0(float param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c91d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc4b8);
    FUN_02132f7c(PTR_DAT_04cae220);
    bRam0000000004f9c91d = 1;
  }
                    /* try { // try from 024a1828 to 025a184b has its CatchHandler @ 024a189c */
  lStack_30 = 0;
  uStack_28 = 0;
  if ((((*(float *)(param_2 + 0x1b0) <= 0.0) || (*(char *)(param_2 + 0x41) == '\0')) ||
      (*(char *)(param_2 + 0x40) != '\0')) ||
     (*(float *)(param_2 + 0x10c) < *(float *)(param_2 + 0x110))) {
LAB_024a1918:
    *(undefined8 *)(param_2 + 0x1b4) = 0;
    *(undefined4 *)(param_2 + 0x1bc) = 0xffffffff;
    return;
  }
  lVar4 = *(long *)(param_2 + 0x20);
  if (lVar4 == 0) goto LAB_024a19f4;
                    /* try { // try from 024a185c to 025a1873 has its CatchHandler @ 024a18a0 */
  if ((*(char *)(lVar4 + 0x80) != '\0') || (*(long *)(param_2 + 0x88) != 0)) goto LAB_024a1918;
  if (*(long *)(lVar4 + 0x20) == 0) goto LAB_024a19f4;
                    /* try { // try from 024a1874 to 025a18cb has its CatchHandler @ 024a16a8 */
  iVar2 = Dino_BusSand_Core_Road__get_ActiveCount_2412078(*(long *)(lVar4 + 0x20),0);
  lVar4 = *(long *)(param_2 + 0x20);
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x20) == 0)) goto LAB_024a19f4;
  if (*(int *)(*(long *)(lVar4 + 0x20) + 0x38) <= iVar2) goto LAB_024a1918;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a1828 with catch @ 024a189c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a185c with catch @ 024a18a0
                        */
  fVar5 = *(float *)(param_2 + 0x1b4) + param_1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a17d4 with catch @ 024a18a4
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a17c0 with catch @ 024a18a8
                        */
  *(float *)(param_2 + 0x1b4) = fVar5;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a178c with catch @ 024a18ac
                        */
  if (fVar5 < *(float *)(param_2 + 0x1b0)) {
    return;
  }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024a17a0 with catch @ 024a18b0
                        */
  param_1 = *(float *)(param_2 + 0x1b8) - param_1;
  *(float *)(param_2 + 0x1b8) = param_1;
  if (0.0 < param_1) {
    return;
  }
                    /* try { // try from 024a18cc to 025a18cf has its CatchHandler @ 024a18e8 */
                    /* try { // try from 024a18d0 to 025a18eb has its CatchHandler @ 024a16a8 */
  *(undefined4 *)(param_2 + 0x1b8) = 0x3fb33333;
  if (*(int *)(param_2 + 0x1bc) < 0) {
LAB_024a1940:
    iVar2 = Dino_BusSand_Core_SimBot__BestTap_241b8b8(lVar4,0);
    *(int *)(param_2 + 0x1bc) = iVar2;
  }
  else {
    if (*(long *)(lVar4 + 0x28) == 0) goto LAB_024a19f4;
                    /* catch() { ... } // from try @ 024a18cc with catch @ 024a18e8 */
    uVar3 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                      (*(long *)(lVar4 + 0x28),*(int *)(param_2 + 0x1bc),&uStack_28,0);
                    /* try { // try from 024a18ec to 025a18f3 has its CatchHandler @ 024a18fc */
    lVar4 = *(long *)(param_2 + 0x20);
    if ((uVar3 & 1) == 0) goto LAB_024a1940;
                    /* try { // try from 024a18f4 to 025a18ff has its CatchHandler @ 024a16a8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024a18ec with catch @ 024a18fc
                        */
    if ((lVar4 == 0) || (*(long *)(lVar4 + 0x28) == 0)) goto LAB_024a19f4;
    uVar3 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(lVar4 + 0x28),uStack_28,0);
    if ((uVar3 & 1) == 0) {
      lVar4 = *(long *)(param_2 + 0x20);
      goto LAB_024a1940;
    }
    iVar2 = *(int *)(param_2 + 0x1bc);
  }
  puVar1 = PTR_DAT_04cae220;
  if (-1 < iVar2) {
    if ((*(long *)(param_2 + 0x20) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0x60), lVar4 == 0)) goto LAB_024a19f4;
    uVar3 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                      (lVar4,iVar2,*(undefined8 *)PTR_DAT_04cae220);
    if ((uVar3 & 1) != 0) {
      if ((*(long *)(param_2 + 0x20) == 0) ||
         (lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0x68), lVar4 == 0)) goto LAB_024a19f4;
      uVar3 = System_Collections_Generic_HashSet_int___Contains_37db5b4
                        (lVar4,*(undefined4 *)(param_2 + 0x1bc),*(undefined8 *)puVar1);
      if ((uVar3 & 1) == 0) {
        return;
      }
    }
  }
  if (*(int *)(param_2 + 0x1bc) < 0) {
    return;
  }
  if (*(long *)(param_2 + 0xe0) != 0) {
    uVar3 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_2 + 0xe0),*(int *)(param_2 + 0x1bc),&lStack_30,
                       *(undefined8 *)PTR_DAT_04cbc4b8);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (lStack_30 != 0) {
      Dino_BusSand_View_VehicleView__Nudge_23fe410(lStack_30,0);
      lVar4 = *(long *)(param_2 + 0x1c0);
      if (lVar4 == 0) {
        return;
      }
      (**(code **)(lVar4 + 0x18))
                (*(undefined8 *)(lVar4 + 0x40),*(undefined4 *)(param_2 + 0x1bc),
                 *(undefined8 *)(lVar4 + 0x28));
      return;
    }
  }
LAB_024a19f4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

