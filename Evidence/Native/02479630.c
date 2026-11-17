/* IL2CPP: Dino.BusSand.DataPack$$Open
Dino_BusSand_DataPack_o* Dino_BusSand_DataPack__Open (System_String_o* resourcesPath, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.DataPack$$Open
   Dino_BusSand_DataPack_o* Dino_BusSand_DataPack__Open (System_String_o* resourcesPath, const
   MethodInfo* method); */

long Dino_BusSand_DataPack__Open_2379630(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cac008;
  if ((bRam0000000004f9c800 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac008);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbb640);
    FUN_02132f7c(PTR_DAT_04cbb648);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab020);
    FUN_02132f7c(PTR_DAT_04cbb650);
    bRam0000000004f9c800 = 1;
  }
  lVar2 = *(long *)puVar1;
  lStack_38 = 0;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 == 0) {
LAB_02479998:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                    (lVar2,param_1,&lStack_38,*(undefined8 *)PTR_DAT_04cbb640);
  if ((uVar3 & 1) == 0) {
    lVar2 = UnityEngine_Resources__Load_object__2891e2c(param_1,*(undefined8 *)PTR_DAT_04cab020);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar4 = UnityEngine_TextAsset__get_bytes_43c5f08(lVar2,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar4 = Dino_BusSand_DataPack__Unpack_23799d0(uVar4);
      lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
      System_Object___ctor_4870e5c(lVar5,0);
      *(undefined8 *)(lVar5 + 0x10) = uVar4;
      thunk_FUN_02134474((undefined8 *)(lVar5 + 0x10),uVar4);
      lStack_38 = lVar5;
      UnityEngine_Resources__UnloadAsset_43b78b0(lVar2,0);
      if (lStack_38 != 0) {
        lVar2 = *(long *)puVar1;
        if (*(int *)(lVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar2 = *(long *)puVar1;
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
        if (lVar2 != 0) {
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (lVar2,param_1,lStack_38,*(undefined8 *)PTR_DAT_04cbb648);
          return lStack_38;
        }
        goto LAB_02479998;
      }
    }
    else {
      uVar4 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbb650,param_1,0);
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
      }
      UnityEngine_Debug__LogError_4361614(uVar4,0);
    }
    lStack_38 = 0;
  }
  return lStack_38;
}

