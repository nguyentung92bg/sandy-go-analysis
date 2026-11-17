/* IL2CPP: Dino.BusSand.View.GameView$$PackMinGapGrains
int32_t Dino_BusSand_View_GameView__PackMinGapGrains (Dino_BusSand_View_StageLayout_o* L, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GameView$$PackMinGapGrains
   int32_t Dino_BusSand_View_GameView__PackMinGapGrains (Dino_BusSand_View_StageLayout_o* L, const
   MethodInfo* method); */

int Dino_BusSand_View_GameView__PackMinGapGrains_239cde4(long param_1)

{
  int iVar1;
  float fVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  float fVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  uint uVar11;
  ulong uVar12;
  long *plVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_a8 [20];
  float fStack_94;
  
  puVar3 = PTR_DAT_04cbc438;
  if ((bRam0000000004f9c90d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc438);
    FUN_02132f7c(PTR_DAT_04caa138);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc440);
    bRam0000000004f9c90d = 1;
  }
  lVar8 = FUN_02133068(*(undefined8 *)puVar3,3);
  if (lVar8 == 0) {
LAB_0249d0c0:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar11 = (uint)*(ulong *)(lVar8 + 0x18);
  if ((1 < uVar11) && (*(undefined4 *)(lVar8 + 0x24) = 1, uVar11 != 2)) {
    *(undefined4 *)(lVar8 + 0x28) = 2;
    puVar5 = PTR_DAT_04cbc440;
    puVar4 = PTR_DAT_04caa200;
    puVar3 = PTR_DAT_04ca9ae8;
    fVar2 = _UNK_00e20948;
    if ((int)uVar11 < 1) {
      iVar14 = 0;
    }
    else {
      uVar16 = 0;
      iVar14 = 0;
      uVar12 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar16) goto LAB_0249d0c4;
        iVar7 = *(int *)(lVar8 + 0x20 + uVar16 * 4);
        lVar9 = Dino_BusSand_View_ArtPack__get_Data_238ddf0();
        if (lVar9 == 0) goto LAB_0249d0c0;
        if (iVar7 == 0) {
          plVar13 = (long *)(lVar9 + 0x90);
        }
        else if (iVar7 == 1) {
          plVar13 = (long *)(lVar9 + 0x98);
        }
        else {
          plVar13 = (long *)(lVar9 + 0xa0);
        }
        lVar9 = *plVar13;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
        lVar15 = 0;
        if ((uVar12 & 1) != 0) {
          if (lVar9 == 0) goto LAB_0249d0c0;
          uVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
          lVar9 = Dino_BusSand_Util__FindDeep_238d3bc(uVar10,*(undefined8 *)puVar5);
          if (lVar9 == 0) {
            lVar15 = 0;
          }
          else {
            lVar15 = UnityEngine_Component__GetComponent_object__26f97e8
                               (lVar9,*(undefined8 *)PTR_DAT_04caa138);
          }
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = UnityEngine_Object__op_Equality_43c6f30(lVar15,0,0);
        if ((uVar12 & 1) == 0) {
          if (lVar15 == 0) goto LAB_0249d0c0;
          uVar10 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar15,0);
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar3);
          }
          uVar12 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
          if ((uVar12 & 1) == 0) {
            lVar9 = UnityEngine_MeshFilter__get_sharedMesh_43893a0(lVar15,0);
            if ((lVar9 == 0) ||
               (UnityEngine_Mesh__get_bounds_438fac4(auStack_a8,lVar9,0), fVar6 = fStack_94,
               param_1 == 0)) goto LAB_0249d0c0;
            fVar18 = *(float *)(param_1 + 0xb8);
            iVar7 = Dino_BusSand_Core_BusFootprint__LengthGrains_2411548(iVar7,10,0);
            fVar17 = fVar2;
            if (fVar2 <= *(float *)(param_1 + 0xb4)) {
              fVar17 = *(float *)(param_1 + 0xb4);
            }
            if (cRam0000000004f9ba93 == '\0') {
              FUN_02132f7c(puVar4);
              cRam0000000004f9ba93 = '\x01';
            }
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            fVar17 = ((fVar6 + fVar6) * fVar18 + 0.25) / fVar17;
            iVar1 = -0x80000000;
            if ((float)(int)fVar17 != INFINITY) {
              iVar1 = (int)fVar17;
            }
            if (iVar14 <= iVar1 - iVar7) {
              iVar14 = iVar1 - iVar7;
            }
          }
        }
        uVar12 = (ulong)*(uint *)(lVar8 + 0x18);
        uVar16 = uVar16 + 1;
      } while ((long)uVar16 < (long)(int)*(uint *)(lVar8 + 0x18));
    }
    return iVar14;
  }
LAB_0249d0c4:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

