/* IL2CPP: Dino.BusSand.App.UI.ArtPopup.<>c__DisplayClass4_0$$<Build>b__0
void Dino_BusSand_App_UI_ArtPopup___c__DisplayClass4_0___Build_b__0 (Dino_BusSand_App_UI_ArtPopup___c__DisplayClass4_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ArtPopup.<>c__DisplayClass4_0$$<Build>b__0
   void Dino_BusSand_App_UI_ArtPopup___c__DisplayClass4_0___Build_b__0
   (Dino_BusSand_App_UI_ArtPopup___c__DisplayClass4_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ArtPopup___c__DisplayClass4_0___Build_b__0_217f3e0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b91a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b91a = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x10) + 0x2c) != '\0') {
      return;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) goto LAB_0227f4ac;
      if (*(char *)(*(long *)(param_1 + 0x18) + 0x48) == '\0') {
        return;
      }
    }
    plVar3 = *(long **)(param_1 + 0x10);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0227f4a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x1a8))(plVar3,*(undefined8 *)(*plVar3 + 0x1b0));
      return;
    }
  }
LAB_0227f4ac:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

