/* IL2CPP: Dino.BusSand.View.ChainRig$$BuildHitch
void Dino_BusSand_View_ChainRig__BuildHitch (Dino_BusSand_View_ChainRig_o* __this, Dino_BusSand_View_ChainRig_Hitch_o* h, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.ChainRig$$BuildHitch
   void Dino_BusSand_View_ChainRig__BuildHitch (Dino_BusSand_View_ChainRig_o* __this,
   Dino_BusSand_View_ChainRig_Hitch_o* h, const MethodInfo* method); */

void Dino_BusSand_View_ChainRig__BuildHitch_2391428(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  undefined4 auStack_5c [2];
  float fStack_54;
  float fStack_48;
  undefined4 uStack_44;
  
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c8cc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa138);
    FUN_02132f7c(PTR_DAT_04cb7798);
    FUN_02132f7c(PTR_DAT_04cad390);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc0e0);
    FUN_02132f7c(PTR_DAT_04cbc0e8);
    bRam0000000004f9c8cc = 1;
  }
  uVar3 = Dino_BusSand_View_ArtPack__get_Data_238ddf0();
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  uVar3 = 0;
  if ((uVar4 & 1) != 0) {
    lVar5 = Dino_BusSand_View_ArtPack__get_Data_238ddf0();
    if (lVar5 == 0) goto LAB_024917b0;
    uVar3 = *(undefined8 *)(lVar5 + 0xb0);
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar3,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar5 = UnityEngine_Object__Instantiate_object__2805310
                    (uVar3,uVar8,0,*(undefined8 *)PTR_DAT_04cad390);
  puVar1 = PTR_DAT_04ca9ac8;
  if (param_2 != 0) {
    auStack_5c[0] = *(undefined4 *)(param_2 + 0x14);
    uVar3 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),auStack_5c);
    uStack_44 = *(undefined4 *)(param_2 + 0x18);
    uVar8 = FUN_02133100(*(undefined8 *)(puVar1 + 0x48),&uStack_44);
    uVar3 = System_String__Format_46d34e8(*(undefined8 *)PTR_DAT_04cbc0e0,uVar3,uVar8,0);
    if (lVar5 != 0) {
      UnityEngine_Object__set_name_43c72ec(lVar5,uVar3,0);
      lVar6 = UnityEngine_GameObject__GetComponentsInChildren_object__275b130
                        (lVar5,1,*(undefined8 *)PTR_DAT_04cb7798);
      if (lVar6 != 0) {
        uVar7 = *(uint *)(lVar6 + 0x18);
        if (0 < (int)uVar7) {
          lVar12 = 0;
          do {
            if (uVar7 <= (uint)lVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_0213322c();
            }
            lVar11 = *(long *)(lVar6 + 0x20 + lVar12 * 8);
            if (lVar11 == 0) goto LAB_024917b0;
            UnityEngine_Renderer__set_shadowCastingMode_4373c54(lVar11,0,0);
            UnityEngine_Renderer__set_receiveShadows_4373dcc(lVar11,0,0);
            UnityEngine_Renderer__set_lightProbeUsage_4373e90(lVar11,0,0);
            UnityEngine_Renderer__set_reflectionProbeUsage_4373f54(lVar11,0,0);
            uVar7 = *(uint *)(lVar6 + 0x18);
            lVar12 = lVar12 + 1;
          } while ((int)lVar12 < (int)uVar7);
        }
        uVar3 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
        puVar9 = (undefined8 *)(param_2 + 0x20);
        *puVar9 = uVar3;
        thunk_FUN_02134474(puVar9,uVar3);
        lVar5 = Dino_BusSand_Util__FindDeep_238d3bc(*puVar9,*(undefined8 *)PTR_DAT_04cbc0e8);
        plVar10 = (long *)(param_2 + 0x28);
        *plVar10 = lVar5;
        thunk_FUN_02134474(plVar10,lVar5);
        lVar5 = *plVar10;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        lVar5 = 0;
        if ((uVar4 & 1) != 0) {
          if (*plVar10 == 0) goto LAB_024917b0;
          lVar5 = UnityEngine_Component__GetComponent_object__26f97e8
                            (*plVar10,*(undefined8 *)PTR_DAT_04caa138);
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        if ((uVar4 & 1) != 0) {
          if (lVar5 == 0) goto LAB_024917b0;
          uVar3 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar5,0);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar2);
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
          if ((uVar4 & 1) != 0) {
            lVar6 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar5,0);
            if (lVar6 == 0) goto LAB_024917b0;
            UnityEngine_Mesh__get_bounds_438fac4(auStack_5c,lVar6,0);
            if (fStack_54 - fStack_48 < _UNK_00e206c4) {
              lVar5 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar5,0);
              if (lVar5 == 0) goto LAB_024917b0;
              UnityEngine_Mesh__get_bounds_438fac4(auStack_5c,lVar5,0);
              *(float *)(param_2 + 0x30) = -(fStack_54 - fStack_48);
            }
          }
        }
        return;
      }
    }
  }
LAB_024917b0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

