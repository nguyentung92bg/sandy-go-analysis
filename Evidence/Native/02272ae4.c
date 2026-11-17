/* IL2CPP: Dino.BusSand.App.CrashContext$$Install
void Dino_BusSand_App_CrashContext__Install (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.CrashContext$$Install
   void Dino_BusSand_App_CrashContext__Install (const MethodInfo* method); */

void Dino_BusSand_App_CrashContext__Install_2172ae4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar2 = PTR_DAT_04cacd58;
  puVar1 = PTR_DAT_04ca9c30;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02272adc with catch @ 02272b04
                        */
  if ((bRam0000000004f9b8b1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacd28);
                    /* try { // try from 02272b1c to 02372b1f has its CatchHandler @ 02272b44 */
    FUN_02132f7c(PTR_DAT_04cacd30);
    FUN_02132f7c(PTR_DAT_04cacd38);
    FUN_02132f7c(PTR_DAT_04cac450);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02272b1c with catch @ 02272b44
                        */
    FUN_02132f7c(PTR_DAT_04cacd58);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b8b1 = 1;
  }
                    /* try { // try from 02272b5c to 02372b5f has its CatchHandler @ 02272b84 */
  lVar5 = UnityEngine_PlayerPrefs__GetString_43b579c(*(undefined8 *)puVar2,*(undefined8 *)puVar1,0);
  puVar1 = PTR_DAT_04cac450;
  if (lVar5 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02272b5c with catch @ 02272b84
                        */
    if (*(int *)(lVar5 + 0x10) < 1) {
      lVar5 = 0;
    }
    if (*(int *)(*(long *)PTR_DAT_04cac450 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac450);
    }
    if (cRam0000000004f9b947 == '\0') {
      FUN_02132f7c(PTR_DAT_04cac450);
      cRam0000000004f9b947 = '\x01';
    }
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar1;
    }
    plVar7 = (long *)(*(long *)(lVar6 + 0xb8) + 0x28);
    *plVar7 = lVar5;
    thunk_FUN_02134474(plVar7,lVar5);
    puVar3 = PTR_DAT_04cacd38;
    puVar2 = PTR_DAT_04cacd30;
    puVar1 = PTR_DAT_04cacd28;
    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cacd28);
    System_Action_object____ctor_35f0008(uVar8,0,*(undefined8 *)puVar3,0);
    Dino_BusSand_App_UI_UIManagerEvents__remove_Opened_21ffc80(uVar8,0);
    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action_object____ctor_35f0008(uVar8,0,*(undefined8 *)puVar2,0);
    Dino_BusSand_App_UI_UIManagerEvents__remove_Closed_21ffe1c(uVar8,0);
    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action_object____ctor_35f0008(uVar8,0,*(undefined8 *)puVar3,0);
    Dino_BusSand_App_UI_UIManagerEvents__add_Opened_21ffbb4(uVar8,0);
    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
    System_Action_object____ctor_35f0008(uVar8,0,*(undefined8 *)puVar2,0);
    puVar1 = PTR_DAT_04cb1b68;
    if ((bRam0000000004f9bc8a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cacd28,0);
      FUN_02132f7c(PTR_DAT_04cb1b68);
      bRam0000000004f9bc8a = 1;
    }
    puVar2 = PTR_DAT_04cacd28;
    lVar5 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 8);
    do {
      lVar6 = System_Delegate__Combine_4872324(lVar5,uVar8,0);
      if (lVar6 == 0) {
        lVar9 = 0;
      }
      else {
        uVar10 = *(undefined8 *)puVar2;
        lVar9 = thunk_FUN_0216e7a0(lVar6,uVar10);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(lVar6,uVar10);
        }
      }
      lVar6 = FUN_0216aff4(*(long *)(*(long *)puVar1 + 0xb8) + 8,lVar9,lVar5);
      bVar4 = lVar6 != lVar5;
      lVar5 = lVar6;
    } while (bVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

