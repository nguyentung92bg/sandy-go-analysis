/* IL2CPP: Dino.BusSand.View.StageLayout$$get_Pack
Dino_BusSand_View_ArtPackData_o* Dino_BusSand_View_StageLayout__get_Pack (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.StageLayout$$get_Pack
   Dino_BusSand_View_ArtPackData_o* Dino_BusSand_View_StageLayout__get_Pack (const MethodInfo*
   method); */

undefined8 Dino_BusSand_View_StageLayout__get_Pack_23e7030(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca8c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbdab8);
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9ca8c = 1;
  }
  uVar4 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
  lVar7 = *(long *)puVar1;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  puVar3 = PTR_DAT_04cbc250;
  puVar2 = PTR_DAT_04cbbf30;
  if ((uVar5 & 1) != 0) {
    if ((bRam0000000004f9c8b6 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cbbf30);
      FUN_02132f7c(PTR_DAT_04cbbf38);
      FUN_02132f7c(PTR_DAT_04cbbf40);
      bRam0000000004f9c8b6 = 1;
    }
    puVar3 = PTR_DAT_04cbbf40;
    puVar1 = PTR_DAT_04cbbf38;
    puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    if (*(char *)(puVar6 + 1) == '\0') {
      *(undefined1 *)(puVar6 + 1) = 1;
      uVar4 = UnityEngine_Resources__Load_object__2891e2c
                        (*(undefined8 *)puVar3,*(undefined8 *)puVar1);
      **(undefined8 **)(*(long *)puVar2 + 0xb8) = uVar4;
      thunk_FUN_02134474(*(undefined8 *)(*(long *)puVar2 + 0xb8),uVar4);
      puVar6 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
    }
    return *puVar6;
  }
  lVar7 = *(long *)PTR_DAT_04cbc250;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  lVar8 = *(long *)puVar1;
  uVar4 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
  if (*(int *)(lVar8 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar8);
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar5 & 1) == 0) {
    uVar4 = UnityEngine_ScriptableObject__CreateInstance_object__28ad0cc
                      (*(undefined8 *)PTR_DAT_04cbdab8);
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar7);
      lVar7 = *(long *)puVar3;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
    *puVar6 = uVar4;
    thunk_FUN_02134474(puVar6,uVar4);
  }
  else {
    lVar7 = *(long *)puVar3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar7 = *(long *)puVar3;
    }
    uVar4 = *(undefined8 *)(*(long *)(lVar7 + 0xb8) + 8);
  }
  return uVar4;
}

