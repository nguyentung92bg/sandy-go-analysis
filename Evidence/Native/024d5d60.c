/* IL2CPP: Dino.BusSand.View.MeshLod$$Get
UnityEngine_Mesh_o* Dino_BusSand_View_MeshLod__Get (UnityEngine_Mesh_o* src, int32_t resolution, bool keepReadable, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MeshLod$$Get
   UnityEngine_Mesh_o* Dino_BusSand_View_MeshLod__Get (UnityEngine_Mesh_o* src, int32_t resolution,
   bool keepReadable, const MethodInfo* method); */

undefined8 Dino_BusSand_View_MeshLod__Get_23d5d60(undefined8 param_1,int param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca26 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbd740);
    FUN_02132f7c(PTR_DAT_04cbd748);
    FUN_02132f7c(PTR_DAT_04cbd750);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd758);
    bRam0000000004f9ca26 = 1;
  }
  uStack_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  puVar2 = PTR_DAT_04cbd750;
  if ((0 < param_2) && ((uVar5 & 1) == 0)) {
    lVar6 = *(long *)PTR_DAT_04cbd750;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar6 = *(long *)puVar2;
    }
    puVar3 = PTR_DAT_04cbd758;
    lVar6 = **(long **)(lVar6 + 0xb8);
    uStack_58 = 0;
    uStack_50 = 0;
    System_ValueTuple_object__int____ctor_30ed3c0
              (&uStack_58,param_1,param_2,*(undefined8 *)PTR_DAT_04cbd758);
    if (lVar6 != 0) {
      uVar5 = System_Collections_Generic_Dictionary_ValueTuple_object__int___object___TryGetValue_3387220
                        (lVar6,uStack_58,uStack_50,&uStack_48,*(undefined8 *)PTR_DAT_04cbd740);
      uVar4 = uStack_48;
      if ((uVar5 & 1) != 0) {
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
        if ((uVar5 & 1) != 0) {
          return uStack_48;
        }
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uStack_48 = Dino_BusSand_View_MeshLod__Simplify_23d5f24(param_1,param_2,param_3 & 1);
      lVar6 = **(long **)(*(long *)puVar2 + 0xb8);
      uStack_58 = 0;
      uStack_50 = 0;
      System_ValueTuple_object__int____ctor_30ed3c0
                (&uStack_58,param_1,param_2,*(undefined8 *)puVar3);
      if (lVar6 != 0) {
        System_Collections_Generic_Dictionary_ValueTuple_object__int___object___set_Item_3385718
                  (lVar6,uStack_58,uStack_50,uStack_48,*(undefined8 *)PTR_DAT_04cbd748);
        return uStack_48;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  return param_1;
}

