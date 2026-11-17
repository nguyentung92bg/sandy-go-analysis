/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$StartNewPeriod
void Dino_BusSand_App_Meta_YachtRacingCore__StartNewPeriod (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, bool force, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.YachtRacingCore$$StartNewPeriod
   void Dino_BusSand_App_Meta_YachtRacingCore__StartNewPeriod
   (Dino_BusSand_App_Meta_YachtRacingCore_o* __this, bool force, const MethodInfo* method); */

void Dino_BusSand_App_Meta_YachtRacingCore__StartNewPeriod_22583f0(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  int iStack_24;
  
                    /* catch() { ... } // from try @ 023582c4 with catch @ 023583f4 */
                    /* catch() { ... } // from try @ 023582b8 with catch @ 023583f8 */
  if ((bRam0000000004f9bff3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2168);
                    /* try { // try from 0235841c to 0245841f has its CatchHandler @ 023584b0 */
                    /* try { // try from 02358420 to 02458473 has its CatchHandler @ 02358188 */
    bRam0000000004f9bff3 = 1;
  }
  iStack_24 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_40 = 0;
  iVar2 = Dino_BusSand_App_Meta_SystemOpen__NextNeedWinTimes_22435b8(5);
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
    iVar1 = *(int *)(lVar5 + 0x34) + 1;
    if ((iVar1 < iVar2) && ((param_2 & 1) == 0)) {
      lVar6 = *(long *)(param_1 + 0x28);
      *(int *)(lVar5 + 0x34) = iVar1;
      if (lVar6 == 0) {
        return;
      }
                    /* try { // try from 02358474 to 02458483 has its CatchHandler @ 023584bc */
                    /* WARNING: Could not recover jumptable at 0x02358478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28));
      return;
    }
    lVar5 = *(long *)(param_1 + 0x20);
    if (lVar5 != 0) {
                    /* try { // try from 02358484 to 02458497 has its CatchHandler @ 02358188 */
      uVar3 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
                    /* try { // try from 02358498 to 024584a7 has its CatchHandler @ 023584ac */
                    /* catch() { ... } // from try @ 02358498 with catch @ 023584ac */
                    /* catch() { ... } // from try @ 0235841c with catch @ 023584b0 */
                    /* try { // try from 023584b4 to 024584c7 has its CatchHandler @ 02358558 */
                    /* catch() { ... } // from try @ 02358474 with catch @ 023584bc */
                    /* catch() { ... } // from try @ 02358368 with catch @ 023584c0 */
      uVar4 = Dino_BusSand_App_Meta_BattleYachtPeriods__Current_2220824
                        (*(undefined8 *)PTR_DAT_04cb2168,1,uVar3,&iStack_24,&uStack_30,&uStack_38,
                         &uStack_40,0);
      if ((uVar4 & 1) == 0) {
        return;
      }
                    /* try { // try from 023584c8 to 02458507 has its CatchHandler @ 02358188 */
                    /* catch() { ... } // from try @ 023581fc with catch @ 023584d0 */
      if (iStack_24 < 1) {
        return;
      }
                    /* catch() { ... } // from try @ 023581ec with catch @ 023584d4 */
                    /* catch() { ... } // from try @ 023581e0 with catch @ 023584d8 */
      if (*(long *)(param_1 + 0x10) != 0) {
                    /* catch() { ... } // from try @ 023581dc with catch @ 023584dc */
        uVar4 = Dino_BusSand_App_Meta_YachtRacingData__NewWindowIsValid_2258634
                          (*(long *)(param_1 + 0x10),uStack_30,uStack_38);
        if ((uVar4 & 1) == 0) {
LAB_0235854c:
                    /* catch() { ... } // from try @ 02358508 with catch @ 0235854c
                       catch() { ... } // from try @ 0235853c with catch @ 0235854c */
          lVar5 = *(long *)(param_1 + 0x28);
                    /* try { // try from 02358550 to 02458553 has its CatchHandler @ 02358558 */
          *(undefined4 *)(param_1 + 100) = 0;
          *(undefined4 *)(param_1 + 0x68) = 0;
          if (lVar5 == 0) {
            return;
          }
                    /* catch() { ... } // from try @ 023584b4 with catch @ 02358558
                       catch() { ... } // from try @ 02358550 with catch @ 02358558 */
          (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
          return;
        }
        Dino_BusSand_App_Meta_YachtRacingCore__EndStage_225605c(param_1);
        if (*(long *)(param_1 + 0x10) != 0) {
          Dino_BusSand_App_Meta_YachtRacingData__Clear_22587a0();
          if (*(long *)(param_1 + 0x10) != 0) {
                    /* try { // try from 02358508 to 0245850b has its CatchHandler @ 0235854c */
                    /* try { // try from 0235850c to 0245853b has its CatchHandler @ 02358188 */
            Dino_BusSand_App_Meta_YachtRacingData__Init_2258878
                      (*(long *)(param_1 + 0x10),iStack_24,uStack_30,uStack_38);
            *(undefined8 *)(param_1 + 0x78) = 0;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x78),0);
            Dino_BusSand_App_Meta_YachtRacingCore__ApplyState_225550c(param_1,2);
                    /* try { // try from 0235853c to 0245854b has its CatchHandler @ 0235854c */
            if ((((param_2 & 1) == 0) ||
                (uVar4 = Dino_BusSand_App_Meta_SystemOpen__Guided_2243224(5), (uVar4 & 1) != 0)) &&
               (*(int *)(param_1 + 0x6c) == 0)) {
              *(undefined4 *)(param_1 + 0x6c) = 2;
            }
            goto LAB_0235854c;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

