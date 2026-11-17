/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$BeginLoad
void Dino_BusSand_App_UI_UiSkin__BeginLoad (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiSkin$$BeginLoad
   void Dino_BusSand_App_UI_UiSkin__BeginLoad (const MethodInfo* method); */

void Dino_BusSand_App_UI_UiSkin__BeginLoad_22a2268(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_DAT_04cb59d8;
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c266 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb5a08);
    FUN_02132f7c(PTR_DAT_04cb59d8);
    FUN_02132f7c(PTR_DAT_04cb59f0);
    bRam0000000004f9c266 = 1;
  }
  uVar5 = **(undefined8 **)(*(long *)puVar2 + 0xb8);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  if (((uVar3 & 1) != 0) && (*(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18) == 0)) {
    uVar5 = UnityEngine_Resources__LoadAsync_object__2891edc
                      (*(undefined8 *)PTR_DAT_04cb59f0,*(undefined8 *)PTR_DAT_04cb5a08);
    puVar4 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *puVar4 = uVar5;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                   ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  return;
}

