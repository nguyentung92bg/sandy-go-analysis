/* IL2CPP: Dino.BusSand.View.WorldView$$BuildPackScenery
void Dino_BusSand_View_WorldView__BuildPackScenery (UnityEngine_Transform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$BuildPackScenery
   void Dino_BusSand_View_WorldView__BuildPackScenery (UnityEngine_Transform_o* parent, const
   MethodInfo* method); */

void Dino_BusSand_View_WorldView__BuildPackScenery_24022a8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  if ((bRam0000000004f9cb10 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbe0a8);
    FUN_02132f7c(PTR_DAT_04cbe0b0);
    FUN_02132f7c(PTR_DAT_04cbe0b8);
    FUN_02132f7c(PTR_DAT_04cb6dc0);
    FUN_02132f7c(PTR_DAT_04cb6dc8);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cbe0c0);
    FUN_02132f7c(PTR_DAT_04cb6de0);
    FUN_02132f7c(PTR_DAT_04cb6de8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad748);
    bRam0000000004f9cb10 = 1;
  }
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  lVar7 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
  puVar6 = PTR_DAT_04cbe0b0;
  puVar5 = PTR_DAT_04cb6dc8;
  puVar4 = PTR_DAT_04cb6dc0;
  puVar3 = PTR_DAT_04caa070;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x50) == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  System_Collections_Generic_List_object___GetEnumerator_3a825f0
            (&uStack_98,*(long *)(lVar7 + 0x50),*(undefined8 *)PTR_DAT_04cbe0c0);
  puVar1 = PTR_DAT_04ca9ac8;
  uStack_78 = puStack_90;
  uStack_80 = uStack_98;
  lStack_70 = lStack_88;
  uStack_98 = 0;
  puStack_90 = &uStack_80;
  while( true ) {
    do {
      uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                        (&uStack_80,*(undefined8 *)puVar6);
      lVar7 = lStack_70;
      if ((uVar8 & 1) == 0) {
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cbe0a8);
        return;
      }
      if (lStack_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar12 = *(undefined8 *)(lStack_70 + 0x18);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar8 = UnityEngine_Object__op_Equality_43c6f30(uVar12,0,0);
    } while ((uVar8 & 1) != 0);
    uVar13 = *(undefined8 *)(lVar7 + 0x10);
    plVar9 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,2);
    uVar12 = *(undefined8 *)PTR_DAT_04cb6de0;
    if (*(int *)(*(long *)(puVar1 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar10 = System_Type__GetTypeFromHandle_483f0b4(uVar12,0);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
      uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar12,0);
    }
    if ((int)plVar9[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar9[4] = lVar10;
    thunk_FUN_02134474(plVar9 + 4,lVar10);
    lVar10 = System_Type__GetTypeFromHandle_483f0b4(*(undefined8 *)PTR_DAT_04cb6de8,0);
    if ((lVar10 != 0) &&
       (lVar11 = thunk_FUN_0216e7a0(lVar10,*(undefined8 *)(*plVar9 + 0x40)), lVar11 == 0)) {
      uVar12 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar12,0);
    }
    if ((*(uint *)(plVar9 + 3) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    plVar9[5] = lVar10;
    thunk_FUN_02134474(plVar9 + 5,lVar10);
    lVar10 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    UnityEngine_GameObject___ctor_43c2310(lVar10,uVar13,plVar9,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__SetParent_43d1e34(lVar11,param_1,0,0);
    lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
    if (lVar11 == 0) break;
    UnityEngine_Transform__set_localPosition_43cfda8
              (*(undefined4 *)(lVar7 + 0x28),*(undefined4 *)(lVar7 + 0x2c),
               *(undefined4 *)(lVar7 + 0x30),lVar11,0);
    lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__set_localRotation_43d156c
              (*(undefined4 *)(lVar7 + 0x34),*(undefined4 *)(lVar7 + 0x38),
               *(undefined4 *)(lVar7 + 0x3c),*(undefined4 *)(lVar7 + 0x40),lVar11,0);
    lVar11 = UnityEngine_GameObject__get_transform_43c1048(lVar10,0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Transform__set_localScale_43d1be0
              (*(undefined4 *)(lVar7 + 0x44),*(undefined4 *)(lVar7 + 0x48),
               *(undefined4 *)(lVar7 + 0x4c),lVar11,0);
    lVar11 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar10,*(undefined8 *)puVar4);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_MeshFilter__set_sharedMesh_4389470(lVar11,*(undefined8 *)(lVar7 + 0x18),0);
    lVar10 = UnityEngine_GameObject__GetComponent_object__275a5dc(lVar10,*(undefined8 *)puVar5);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Renderer__set_sharedMaterials_43743d4(lVar10,*(undefined8 *)(lVar7 + 0x20),0);
    UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar10,0,0);
    UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar10,0,0);
    UnityEngine_Renderer__set_lightProbeUsage_4373e90(lVar10,0,0);
    UnityEngine_Renderer__set_reflectionProbeUsage_4373f54(lVar10,0,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

