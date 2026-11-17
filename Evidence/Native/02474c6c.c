/* IL2CPP: Dino.BusSand.GameAssets$$get_Instance
Dino_BusSand_GameAssets_o* Dino_BusSand_GameAssets__get_Instance (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAssets$$get_Instance
   Dino_BusSand_GameAssets_o* Dino_BusSand_GameAssets__get_Instance (const MethodInfo* method); */

undefined8 Dino_BusSand_GameAssets__get_Instance_2374c6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cab208;
  if ((bRam0000000004f9c811 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbb240);
    FUN_02132f7c(PTR_DAT_04cbb248);
    FUN_02132f7c(PTR_DAT_04cbb250);
    bRam0000000004f9c811 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar6 = *(long *)puVar1;
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    uVar7 = UnityEngine_Resources__Load_object__2891e2c
                      (*(undefined8 *)PTR_DAT_04cbb248,*(undefined8 *)PTR_DAT_04cbb240);
    lVar3 = *(long *)puVar2;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar3);
      lVar3 = *(long *)puVar2;
    }
    puVar5 = (undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
    *puVar5 = uVar7;
    thunk_FUN_02134474(puVar5,uVar7);
    uVar7 = *(undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_Debug__LogError_4361614(*(undefined8 *)PTR_DAT_04cbb250,0);
    }
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  return *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 8);
}

