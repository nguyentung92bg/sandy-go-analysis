/* IL2CPP: Dino.BusSand.View.HighwayMesh$$At
UnityEngine_Vector3_o Dino_BusSand_View_HighwayMesh__At (System_Collections_Generic_List_Vector3__o* p, System_Single_array* cum, float s, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.HighwayMesh$$At
   UnityEngine_Vector3_o Dino_BusSand_View_HighwayMesh__At
   (System_Collections_Generic_List_Vector3__o* p, System_Single_array* cum, float s, const
   MethodInfo* method); */

float Dino_BusSand_View_HighwayMesh__At_23b8ef4
                (float param_1,undefined1 param_2 [16],float param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((bRam0000000004f9c98c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc9d8);
    FUN_02132f7c(PTR_DAT_04caa1a0);
    FUN_02132f7c(PTR_DAT_04caa1a8);
    bRam0000000004f9c98c = 1;
  }
  puVar4 = PTR_DAT_04caa1a8;
  if (param_4 != 0) {
    if (param_1 <= 0.0) {
      fVar13 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (param_4,1,*(undefined8 *)PTR_DAT_04caa1a8);
      fVar9 = param_3;
      fVar10 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                (param_4,0,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)PTR_DAT_04cbc9d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b65c == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9b65c = '\x01';
      }
      fVar13 = fVar13 - fVar10;
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar9 = SQRT((param_3 - fVar9) * (param_3 - fVar9) + fVar13 * fVar13);
      if (fVar9 <= _UNK_00e20a08) {
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
        }
        fVar13 = **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      }
      else {
        fVar13 = fVar13 / fVar9;
      }
      fVar9 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                               (param_4,0,*(undefined8 *)puVar4);
                    /* try { // try from 024b930c to 025b93df has its CatchHandler @ 024b930c
                       catch() { ... } // from try @ 024b930c with catch @ 024b930c
                       catch() { ... } // from try @ 024b93e8 with catch @ 024b930c
                       catch() { ... } // from try @ 024b9448 with catch @ 024b930c
                       catch() { ... } // from try @ 024b946c with catch @ 024b930c */
      return fVar13 * param_1 + fVar9;
    }
    if (param_5 != 0) {
      iVar2 = *(int *)(param_4 + 0x18);
      uVar3 = *(uint *)(param_5 + 0x18);
      uVar5 = iVar2 - 1;
      if (uVar5 < uVar3) {
        pfVar8 = (float *)(param_5 + (long)(int)uVar5 * 4 + 0x20);
        if (*pfVar8 <= param_1) {
          fVar13 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (param_4,uVar5,*(undefined8 *)PTR_DAT_04caa1a8);
          fVar9 = param_3;
          fVar10 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                    (param_4,iVar2 + -2,*(undefined8 *)puVar4);
          if (*(int *)(*(long *)PTR_DAT_04cbc9d8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b65c == '\0') {
            FUN_02132f7c(PTR_DAT_04caa200);
            cRam0000000004f9b65c = '\x01';
          }
          fVar13 = fVar13 - fVar10;
          if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar9 = SQRT((param_3 - fVar9) * (param_3 - fVar9) + fVar13 * fVar13);
          if (fVar9 <= _UNK_00e20a08) {
            if (cRam0000000004f9b65d == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            fVar13 = **(float **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          }
          else {
            fVar13 = fVar13 / fVar9;
          }
          fVar9 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                   (param_4,uVar5,*(undefined8 *)puVar4);
          if (uVar5 < *(uint *)(param_5 + 0x18)) {
            return fVar9 + fVar13 * (param_1 - *pfVar8);
          }
        }
        else {
          uVar7 = 1;
          if (1 < (int)uVar5) {
            do {
              while( true ) {
                uVar1 = (int)(uVar7 + uVar5) >> 1;
                if (uVar3 <= uVar1) goto LAB_024b9328;
                if (param_1 <= *(float *)(param_5 + (long)(int)uVar1 * 4 + 0x20)) break;
                uVar7 = uVar1 + 1;
                if ((int)uVar5 <= (int)uVar7) goto LAB_024b8fd0;
              }
              uVar5 = uVar1;
            } while ((int)uVar7 < (int)uVar1);
          }
LAB_024b8fd0:
          if (uVar7 < uVar3) {
            uVar6 = (long)(int)uVar7 - 1;
            if ((uint)uVar6 < uVar3) {
              pfVar8 = (float *)(param_5 + 0x20 + uVar6 * 4);
              fVar13 = *(float *)(param_5 + 0x20 + (long)(int)uVar7 * 4) - *pfVar8;
              fVar9 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                       (param_4,uVar6 & 0xffffffff,*(undefined8 *)PTR_DAT_04caa1a8);
              if (*(int *)(*(long *)PTR_DAT_04cbc9d8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              fVar10 = (float)System_Collections_Generic_List_Vector3___get_Item_3af99e4
                                        (param_4,uVar7,*(undefined8 *)puVar4);
              fVar11 = 0.0;
              if (_UNK_00e20900 < fVar13) {
                if (*(uint *)(param_5 + 0x18) <= (uint)uVar6) goto LAB_024b9328;
                fVar11 = (param_1 - *pfVar8) / fVar13;
              }
              fVar13 = 1.0;
              if (fVar11 <= 1.0) {
                fVar13 = fVar11;
              }
              fVar12 = 0.0;
              if (0.0 <= fVar11) {
                fVar12 = fVar13;
              }
              return fVar9 + (fVar10 - fVar9) * fVar12;
            }
          }
        }
      }
LAB_024b9328:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

