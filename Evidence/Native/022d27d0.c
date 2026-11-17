/* IL2CPP: Dino.BusSand.App.UI.PassportOpenPanel$$OnOpen
void Dino_BusSand_App_UI_PassportOpenPanel__OnOpen (Dino_BusSand_App_UI_PassportOpenPanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.PassportOpenPanel$$OnOpen
   void Dino_BusSand_App_UI_PassportOpenPanel__OnOpen (Dino_BusSand_App_UI_PassportOpenPanel_o*
   __this, Il2CppObject* param, const MethodInfo* method); */

void Dino_BusSand_App_UI_PassportOpenPanel__OnOpen_21d27d0(long param_1,long *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  if ((bRam0000000004f9bb48 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04ca9d18);
    FUN_02132f7c(PTR_DAT_04cb0530);
    FUN_02132f7c(PTR_DAT_04cadf08);
    FUN_02132f7c(PTR_DAT_04cb0538);
    FUN_02132f7c(PTR_DAT_04caec98);
    FUN_02132f7c(PTR_DAT_04cb02b0);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04caf208);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9bb48 = 1;
  }
  puVar3 = PTR_DAT_04caa458;
  puVar2 = PTR_DAT_04ca9d18;
  if (param_2 == (long *)0x0) {
    param_2 = (long *)0x0;
    *(undefined8 *)(param_1 + 0x38) = 0;
  }
  else {
    lVar12 = *(long *)PTR_DAT_04caa458;
    plVar1 = param_2;
    if (*param_2 != lVar12) {
      plVar1 = (long *)0x0;
    }
    *(long **)(param_1 + 0x38) = plVar1;
    if (*param_2 != lVar12) {
      param_2 = (long *)0x0;
    }
  }
  thunk_FUN_02134474(param_1 + 0x38,param_2);
  lVar13 = *(long *)puVar2;
  lVar12 = *(long *)(lVar13 + 0x38);
  if (lVar12 == 0) {
    FUN_0216b4cc(lVar13);
    lVar12 = *(long *)(lVar13 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar5 = PTR_DAT_04cb0538;
  puVar4 = PTR_DAT_04cadf08;
  lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
            (param_1,*(undefined8 *)puVar4,*(undefined8 *)puVar5,**(undefined8 **)(lVar12 + 0xb8),0)
  ;
  lVar13 = *(long *)puVar2;
  lVar12 = *(long *)(lVar13 + 0x38);
  if (lVar12 == 0) {
    FUN_0216b4cc(lVar13);
                    /* try { // try from 022d2954 to 023d2b3f has its CatchHandler @ 022d2b58 */
    lVar12 = *(long *)(lVar13 + 0x38);
  }
  lVar12 = *(long *)(lVar12 + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  if (*(int *)(lVar12 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar8 = PTR_DAT_04cb0530;
  puVar7 = PTR_DAT_04cb02b0;
  puVar6 = PTR_DAT_04caf208;
  puVar5 = PTR_DAT_04caec98;
  puVar4 = PTR_DAT_04cad948;
  puVar2 = PTR_DAT_04cad460;
  lVar12 = *(long *)(*(long *)(lVar13 + 0x38) + 0x10);
  if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
    lVar12 = FUN_0216b470();
  }
  Dino_BusSand_App_UI_UIPanel__TxtKey_2200a70
            (param_1,*(undefined8 *)puVar5,*(undefined8 *)puVar7,**(undefined8 **)(lVar12 + 0xb8),0)
  ;
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Action___ctor_47b5ed0(uVar9,param_1,*(undefined8 *)puVar8,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar2,uVar9,1,*(undefined8 *)puVar4,0);
  uVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
  System_Action___ctor_47b5ed0(uVar9,param_1,*(undefined8 *)puVar8,0);
  Dino_BusSand_App_UI_UIPanel__Btn_2200cb0
            (param_1,*(undefined8 *)puVar6,uVar9,1,*(undefined8 *)puVar4,0);
  lVar12 = Dino_BusSand_App_UI_PassportOpenPanel__Tick_21d2a78(param_1);
  uVar10 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
  if ((uVar10 & 1) == 0) {
    return;
  }
  if (lVar12 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar11 = thunk_FUN_0216e89c();
    uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar11,uVar9,0);
  }
  else {
    uVar10 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar10 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar13 = *(long *)(param_1 + 0x10);
      if (lVar13 != 0) {
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar13,lVar12);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar11 = thunk_FUN_0216e89c();
    uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar11,uVar9,0);
  }
  uVar9 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar11,uVar9);
}

