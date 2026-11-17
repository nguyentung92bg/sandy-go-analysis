/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<Timer>d__20$$MoveNext
bool Dino_BusSand_App_UI_StreakRatePanel__Timer_d__20__MoveNext (Dino_BusSand_App_UI_StreakRatePanel__Timer_d__20_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.StreakRatePanel.<Timer>d__20$$MoveNext
   bool Dino_BusSand_App_UI_StreakRatePanel__Timer_d__20__MoveNext
   (Dino_BusSand_App_UI_StreakRatePanel__Timer_d__20_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_StreakRatePanel__Timer_d__20__MoveNext_21e5d14(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if ((bRam0000000004f9bbce & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cade40);
    FUN_02132f7c(PTR_DAT_04cb08d0);
                    /* try { // try from 022e5d54 to 023e5d8b has its CatchHandler @ 022e5b4c */
    FUN_02132f7c(PTR_DAT_04cade18);
    bRam0000000004f9bbce = 1;
  }
  puVar1 = PTR_DAT_04caca88;
  lVar4 = *(long *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(0x3f000000,uVar2,0);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x28),uVar2);
    if (lVar4 == 0) goto LAB_022e5e7c;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 1) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar4 == 0) {
LAB_022e5e7c:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 022e5d8c to 023e5d8f has its CatchHandler @ 022e5dc4 */
    if (0 < *(long *)(lVar4 + 0x48)) {
      uVar2 = Dino_BusSand_App_Meta_StreakTowerUtil__ActivityTimeString_2251b98
                        (*(long *)(lVar4 + 0x48),0);
      Dino_BusSand_App_UI_UIPanel__Txt_2200924(lVar4,*(undefined8 *)PTR_DAT_04cade40,uVar2,0);
      lVar5 = *(long *)(lVar4 + 0x48);
                    /* try { // try from 022e5db8 to 023e5dbb has its CatchHandler @ 022e5ddc */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e5cd4 with catch @ 022e5dbc
                       try { // try from 022e5dbc to 023e5df7 has its CatchHandler @ 022e5b4c */
      lVar3 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
      puVar1 = PTR_DAT_04cade18;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e5ca0 with catch @ 022e5dc0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e5d8c with catch @ 022e5dc4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e5b98 with catch @ 022e5dc8
                        */
      if (lVar5 - lVar3 < 1) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e5c14 with catch @ 022e5dd8
                       catch(type#1 @ 00000000) { ... } // from try @ 022e5d00 with catch @ 022e5dd8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e5bd0 with catch @ 022e5ddc
                       catch(type#1 @ 00000000) { ... } // from try @ 022e5db8 with catch @ 022e5ddc
                        */
        *(undefined8 *)(lVar4 + 0x48) = 0;
        Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar4,*(undefined8 *)puVar1,0,0);
                    /* try { // try from 022e5df8 to 023e5dfb has its CatchHandler @ 022e5e04 */
                    /* try { // try from 022e5dfc to 023e5e07 has its CatchHandler @ 022e5b4c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022e5df8 with catch @ 022e5e04
                        */
        Dino_BusSand_App_UI_UIPanel__Show_21f4018(lVar4,*(undefined8 *)PTR_DAT_04cb08d0,1,0);
                    /* try { // try from 022e5e08 to 023e607f has its CatchHandler @ 022e5e08
                       catch() { ... } // from try @ 022e5e08 with catch @ 022e5e08
                       catch() { ... } // from try @ 022e6098 with catch @ 022e5e08 */
      }
    }
  }
  if (*(char *)(lVar4 + 0x2c) != '\0') {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x28);
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x10) = 1;
  return 1;
}

