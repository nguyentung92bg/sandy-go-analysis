/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$get_I
Dino_BusSand_App_UI_UiTweaks_o* Dino_BusSand_App_UI_UiTweaks__get_I (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiTweaks$$get_I
   Dino_BusSand_App_UI_UiTweaks_o* Dino_BusSand_App_UI_UiTweaks__get_I (const MethodInfo* method);
    */

undefined8 Dino_BusSand_App_UI_UiTweaks__get_I_22a31b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar1 = PTR_DAT_04cb5b08;
  if ((bRam0000000004f9c274 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb5b10);
    FUN_02132f7c(PTR_DAT_04cb5b08);
    FUN_02132f7c(PTR_DAT_04cb5b18);
    bRam0000000004f9c274 = 1;
  }
  puVar3 = PTR_DAT_04cb5b18;
  puVar2 = PTR_DAT_04cb5b10;
  puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  if (*(char *)(puVar5 + 1) == '\0') {
    *(undefined1 *)(puVar5 + 1) = 1;
    uVar4 = UnityEngine_Resources__Load_object__2891e2c(*(undefined8 *)puVar3,*(undefined8 *)puVar2)
    ;
    **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar4;
    thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar1 + 0xb8),uVar4);
    puVar5 = *(undefined8 **)(*(long *)puVar1 + 0xb8);
  }
  return *puVar5;
}

