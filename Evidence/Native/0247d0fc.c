/* IL2CPP: Dino.BusSand.GameAssets$$GetMesh
UnityEngine_Mesh_o* Dino_BusSand_GameAssets__GetMesh (Dino_BusSand_GameAssets_o* __this, System_String_o* meshName, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.GameAssets$$GetMesh
   UnityEngine_Mesh_o* Dino_BusSand_GameAssets__GetMesh (Dino_BusSand_GameAssets_o* __this,
   System_String_o* meshName, const MethodInfo* method); */

undefined8 Dino_BusSand_GameAssets__GetMesh_237d0fc(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uStack_28;
  
  if ((bRam0000000004f9c815 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbb7f8);
    FUN_02132f7c(PTR_DAT_04cbb800);
    FUN_02132f7c(PTR_DAT_04cab208);
    FUN_02132f7c(PTR_DAT_04cbb808);
    bRam0000000004f9c815 = 1;
  }
  uStack_28 = 0;
  plVar4 = (long *)(param_1 + 0x80);
  lVar1 = *plVar4;
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar1 = Dino_BusSand_GameAssets__Index_object__275a37c(uVar3,*(undefined8 *)PTR_DAT_04cbb800);
    *plVar4 = lVar1;
    thunk_FUN_02134474(plVar4,lVar1);
    lVar1 = *plVar4;
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
  }
  uVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar1,param_2,&uStack_28,*(undefined8 *)PTR_DAT_04cbb7f8);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04cab208 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_GameAssets__Miss_237cae0(*(undefined8 *)PTR_DAT_04cbb808,param_2);
    uStack_28 = 0;
  }
  return uStack_28;
}

