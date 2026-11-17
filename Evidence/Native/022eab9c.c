/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton.<Tick>d__39$$MoveNext
bool Dino_BusSand_App_UI_YachtRacingHallButton__Tick_d__39__MoveNext (Dino_BusSand_App_UI_YachtRacingHallButton__Tick_d__39_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.YachtRacingHallButton.<Tick>d__39$$MoveNext
   bool Dino_BusSand_App_UI_YachtRacingHallButton__Tick_d__39__MoveNext
   (Dino_BusSand_App_UI_YachtRacingHallButton__Tick_d__39_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_YachtRacingHallButton__Tick_d__39__MoveNext_21eab9c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  
  if ((bRam0000000004f9bbf1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9bbf1 = 1;
  }
  puVar1 = PTR_DAT_04caca88;
  lVar6 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* catch() { ... } // from try @ 022eac1c with catch @ 022eac80 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f800000,uVar5,0);
    *(undefined8 *)(param_1 + 0x30) = uVar5;
                    /* try { // try from 022eacb0 to 023ead47 has its CatchHandler @ 022eacb0
                       catch() { ... } // from try @ 022eacb0 with catch @ 022eacb0
                       catch() { ... } // from try @ 022ead50 with catch @ 022eacb0 */
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x30),uVar5);
    *(undefined4 *)(param_1 + 0x38) = 0;
    if (lVar6 != 0) goto LAB_022eacbc;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar6 != 0) {
      if (*(int *)(param_1 + 0x20) != *(int *)(lVar6 + 0x90)) {
        return 0;
      }
      uVar3 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(lVar6);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      if (*(char *)(lVar6 + 0x8e) != '\0') {
        Dino_BusSand_App_UI_YachtRacingHallButton__OnCountDown_21e9c6c(lVar6);
      }
                    /* try { // try from 022eac1c to 023eac23 has its CatchHandler @ 022eac80 */
                    /* try { // try from 022eac24 to 023eacaf has its CatchHandler @ 022eab84 */
      fVar7 = *(float *)(param_1 + 0x38) + 1.0;
      *(float *)(param_1 + 0x38) = fVar7;
      if (fVar7 < 60.0) {
LAB_022eacbc:
        if ((*(int *)(param_1 + 0x20) == *(int *)(lVar6 + 0x90)) &&
           (uVar3 = Dino_BusSand_App_UI_YachtRacingHallButton__get_Alive_21e9704(lVar6),
           (uVar3 & 1) != 0)) {
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x30);
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
          *(undefined4 *)(param_1 + 0x10) = 1;
          return 1;
        }
        return 0;
      }
      lVar4 = *(long *)(lVar6 + 0x28);
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (lVar4 != 0) {
        iVar2 = Dino_BusSand_App_Meta_YachtRacingCore__get_State_22553b4(lVar4,0);
        if (iVar2 != 3) goto LAB_022eacbc;
        if (*(long *)(lVar6 + 0x28) != 0) {
          Dino_BusSand_App_Meta_YachtRacingCore__TickSession_22563a4(*(long *)(lVar6 + 0x28),0);
          if (*(long *)(lVar6 + 0x28) != 0) {
            Dino_BusSand_App_Meta_YachtRacingCore__RefreshBotsData_2255be0
                      (*(long *)(lVar6 + 0x28),0);
            goto LAB_022eacbc;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

