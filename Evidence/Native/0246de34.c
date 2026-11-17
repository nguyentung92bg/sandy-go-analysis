/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass25_0$$<Add>b__0
void Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass25_0___Add_b__0 (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatMobilePanel.<>c__DisplayClass25_0$$<Add>b__0
   void Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass25_0___Add_b__0
   (Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
    */

void Dino_BusSand_Cheat_CheatMobilePanel___c__DisplayClass25_0___Add_b__0_236de34(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  if ((bRam0000000004f9c7b6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac6f8);
    bRam0000000004f9c7b6 = 1;
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
                    /* try { // try from 0246de6c to 0256de93 has its CatchHandler @ 0246dfb0 */
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_0246df04;
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(*(long *)(param_1 + 0x18),0);
    if (cRam0000000004f9b94d == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
      cRam0000000004f9b94d = '\x01';
    }
                    /* try { // try from 0246de98 to 0256de9f has its CatchHandler @ 0246dfa0 */
                    /* try { // try from 0246dea0 to 0256deab has its CatchHandler @ 0246dfa4 */
    if (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8) != 0) {
      Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                (**(long **)(*(long *)PTR_DAT_04cad1b0 + 0xb8),*(undefined8 *)PTR_DAT_04cac6f8);
    }
  }
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* try { // try from 0246decc to 0256decf has its CatchHandler @ 0246df98 */
                    /* try { // try from 0246ded0 to 0256ded7 has its CatchHandler @ 0246df9c */
  (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
  if (*(char *)(param_1 + 0x10) != '\0') {
                    /* try { // try from 0246dee4 to 0256dee7 has its CatchHandler @ 0246dfac */
                    /* try { // try from 0246dee8 to 0256df87 has its CatchHandler @ 0246dc6c */
    return;
  }
  lVar8 = *(long *)(param_1 + 0x18);
  if (lVar8 != 0) {
    if ((bRam0000000004f9c79b & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbae20,0);
      FUN_02132f7c(PTR_DAT_04cbae28);
      FUN_02132f7c(PTR_DAT_04cbae30);
      FUN_02132f7c(PTR_DAT_04cbae38);
      FUN_02132f7c(PTR_DAT_04ca9ae8);
      FUN_02132f7c(PTR_DAT_04cad330);
      bRam0000000004f9c79b = 1;
    }
    puVar4 = PTR_DAT_04cbae28;
    puVar3 = PTR_DAT_04cbae20;
    puVar2 = PTR_DAT_04cad330;
    puVar1 = PTR_DAT_04ca9ae8;
    lVar8 = *(long *)(lVar8 + 0x48);
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
    if (lVar8 != 0) {
      System_Collections_Generic_List_ValueTuple_object__object____GetEnumerator_39bcbe4
                (&uStack_60,lVar8,*(undefined8 *)PTR_DAT_04cbae38);
      while( true ) {
        do {
          uVar6 = System_Collections_Generic_List_Enumerator_ValueTuple_object__object____MoveNext_35bc4f8
                            (&uStack_60,*(undefined8 *)puVar4);
          lVar8 = lStack_48;
          uVar5 = uStack_50;
          if ((uVar6 & 1) == 0) {
            System_Collections_Generic_List_Enumerator_ValueTuple_object__object____Dispose_35bc4f4
                      (&uStack_60,*(undefined8 *)puVar3);
            return;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
        } while ((uVar6 & 1) == 0);
        if (lVar8 == 0) break;
        uVar7 = (**(code **)(lVar8 + 0x18))
                          (*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_UI_UiKit__SetLabel_228cb44(uVar5,uVar7,0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0246df04:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

