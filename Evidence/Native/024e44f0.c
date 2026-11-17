/* IL2CPP: Dino.BusSand.View.RoadLoopDebug$$UpdateLine
void Dino_BusSand_View_RoadLoopDebug__UpdateLine (Dino_BusSand_View_RoadLoopDebug_o* __this, bool show, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.RoadLoopDebug$$UpdateLine
   void Dino_BusSand_View_RoadLoopDebug__UpdateLine (Dino_BusSand_View_RoadLoopDebug_o* __this, bool
   show, const MethodInfo* method); */

void Dino_BusSand_View_RoadLoopDebug__UpdateLine_23e44f0(long param_1,ulong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  
  puVar6 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca79 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbda30);
    FUN_02132f7c(PTR_DAT_04cab588);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbda38);
    FUN_02132f7c(PTR_DAT_04cbda40);
    bRam0000000004f9ca79 = 1;
  }
  plVar12 = (long *)(param_1 + 0x28);
  lVar13 = *plVar12;
  iVar1 = *(int *)(*(long *)puVar6 + 0xe4);
  if ((param_2 & 1) == 0) {
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar13,0,0);
    if ((uVar7 & 1) != 0) {
      lVar13 = *plVar12;
      if (lVar13 != 0) {
        if ((bRam0000000004fa68c4 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf67a0,0,0);
          bRam0000000004fa68c4 = 1;
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar14 = *(long *)(lVar13 + 0x10);
        if (lVar14 != 0) {
          if (pcRam0000000004fa6930 == (code *)0x0) {
            pcRam0000000004fa6930 = (code *)FUN_02132f40(&UNK_00e53f3c);
          }
                    /* WARNING: Could not recover jumptable at 0x04473b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa6930)(lVar14,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar13,0);
      }
      goto LAB_024e48a8;
    }
  }
  else {
    if (iVar1 == 0) {
      thunk_FUN_0218fdac();
    }
    uVar7 = UnityEngine_Object__op_Equality_43c6f30(lVar13,0,0);
    if ((uVar7 & 1) != 0) {
      lVar13 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
      if (lVar13 == 0) goto LAB_024e48a8;
      lVar13 = UnityEngine_GameObject__AddComponent_object__275a54c
                         (lVar13,*(undefined8 *)PTR_DAT_04cbda30);
      *plVar12 = lVar13;
      thunk_FUN_02134474(plVar12,lVar13);
      if (*plVar12 == 0) goto LAB_024e48a8;
      UnityEngine_LineRenderer__set_useWorldSpace_4371e3c(*plVar12,1,0);
      if (*plVar12 == 0) goto LAB_024e48a8;
      UnityEngine_LineRenderer__set_widthMultiplier_4371ca4(_UNK_00e201f4,*plVar12,0);
      if (*plVar12 == 0) goto LAB_024e48a8;
      UnityEngine_LineRenderer__set_numCapVertices_4371d78(*plVar12,2,0);
      uVar8 = UnityEngine_Shader__Find_43750d0(*(undefined8 *)PTR_DAT_04cbda38,0);
      lVar13 = *(long *)puVar6;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar13);
      }
      uVar7 = UnityEngine_Object__op_Equality_43c6f30(uVar8,0,0);
      if ((uVar7 & 1) != 0) {
        uVar8 = UnityEngine_Shader__Find_43750d0(*(undefined8 *)PTR_DAT_04cbda40,0);
      }
      lVar13 = *plVar12;
      uVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cab588);
      UnityEngine_Material___ctor_437b5a8(uVar9,uVar8,0);
      if (lVar13 == 0) goto LAB_024e48a8;
      UnityEngine_Renderer__set_material_43743c4(lVar13,uVar9,0);
      uVar5 = _UNK_00e20754;
      uVar3 = _UNK_00e20180;
      uVar2 = _UNK_00e1fea8;
      lVar13 = *plVar12;
      if (lVar13 == 0) goto LAB_024e48a8;
      UnityEngine_LineRenderer__set_endColor_4371fd4
                (0x3f800000,_UNK_00e20180,_UNK_00e20754,_UNK_00e1fea8,lVar13,0);
      UnityEngine_LineRenderer__set_startColor_4371f00(0x3f800000,uVar3,uVar5,uVar2,lVar13,0);
      if (*plVar12 == 0) goto LAB_024e48a8;
      UnityEngine_Renderer__set_shadowCastingMode_4373c54(*plVar12,0,0);
    }
    if (*plVar12 == 0) {
LAB_024e48a8:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_Renderer__set_enabled_4373adc(*plVar12,1,0);
    iVar1 = *(int *)(param_1 + 0x30);
    if (cRam0000000004f9ca99 == '\0') {
      FUN_02132f7c(PTR_DAT_04cbda00);
      cRam0000000004f9ca99 = '\x01';
    }
    if (iVar1 != **(int **)(*(long *)PTR_DAT_04cbda00 + 0xb8)) {
      *(int *)(param_1 + 0x30) = **(int **)(*(long *)PTR_DAT_04cbda00 + 0xb8);
      if (((*(long *)(param_1 + 0x20) == 0) ||
          (lVar13 = Dino_BusSand_View_StageLayout__ReturnPathPoints_23e4e18(), lVar13 == 0)) ||
         (*plVar12 == 0)) goto LAB_024e48a8;
      UnityEngine_LineRenderer__set_positionCount_43720a8(*plVar12,*(undefined4 *)(lVar13 + 0x18),0)
      ;
      puVar6 = PTR_DAT_04caa208;
      fVar4 = _UNK_00e205f8;
      if (0 < (int)*(ulong *)(lVar13 + 0x18)) {
        uVar7 = 0;
        uVar10 = *(ulong *)(lVar13 + 0x18) & 0xffffffff;
        pfVar15 = (float *)(lVar13 + 0x28);
        do {
          if (uVar10 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_0213322c();
          }
          lVar14 = *plVar12;
          uVar8 = *(undefined8 *)(pfVar15 + -2);
          fVar17 = *pfVar15;
          if (cRam0000000004f9bcf8 == '\0') {
            FUN_02132f7c(puVar6);
            cRam0000000004f9bcf8 = '\x01';
          }
          if (lVar14 == 0) goto LAB_024e48a8;
          lVar11 = *(long *)(*(long *)puVar6 + 0xb8);
          uVar9 = *(undefined8 *)(lVar11 + 0x18);
          fVar16 = (float)((ulong)uVar8 >> 0x20) + (float)((ulong)uVar9 >> 0x20) * 0.08;
          UnityEngine_LineRenderer__SetPosition_437216c
                    (CONCAT44(fVar16,(float)uVar8 + (float)uVar9 * 0.08),fVar16,
                     fVar17 + *(float *)(lVar11 + 0x20) * fVar4,lVar14,uVar7 & 0xffffffff,0);
          uVar10 = (ulong)*(uint *)(lVar13 + 0x18);
          uVar7 = uVar7 + 1;
          pfVar15 = pfVar15 + 3;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar13 + 0x18));
      }
    }
  }
  return;
}

