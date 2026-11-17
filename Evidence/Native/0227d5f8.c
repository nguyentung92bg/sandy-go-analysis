/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$Prepare
void Dino_BusSand_App_UI_UIParticleSorting__Prepare (Coffee_UIExtensions_UIParticle_o* p, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.UIParticleSorting$$Prepare
   void Dino_BusSand_App_UI_UIParticleSorting__Prepare (Coffee_UIExtensions_UIParticle_o* p, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_UIParticleSorting__Prepare_217d5f8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  undefined8 uStack_58;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b90f & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabe08);
    FUN_02132f7c(PTR_DAT_04cad3c0);
    FUN_02132f7c(PTR_DAT_04cad3c8);
    FUN_02132f7c(PTR_DAT_04cab198);
    FUN_02132f7c(PTR_DAT_04cab1a0);
    FUN_02132f7c(PTR_DAT_04cab1a8);
    FUN_02132f7c(PTR_DAT_04cab1c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab188);
    bRam0000000004f9b90f = 1;
  }
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
  uStack_58 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar9 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar9 & 1) != 0) {
    return;
  }
  if (param_1 != 0) {
    if (*(char *)(param_1 + 0x58) != '\0') {
      return;
    }
    lVar10 = UnityEngine_Component__GetComponentInParent_object__26f9f44
                       (param_1,1,*(undefined8 *)PTR_DAT_04cad3c0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
    puVar3 = PTR_DAT_04cab188;
    if ((uVar9 & 1) != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x58) = 1;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar5 = Dino_BusSand_App_UI_UIParticleSorting__EffectiveOrder_217dc1c(lVar10);
    if (lVar10 != 0) {
      uVar6 = UnityEngine_Canvas__get_sortingLayerID_4680320(lVar10,0);
      uVar21 = *(undefined8 *)(param_1 + 0x24);
      fVar23 = *(float *)(param_1 + 0x2c);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      puVar2 = PTR_DAT_04caa208;
      fVar20 = _UNK_00e1fea0;
      puVar14 = *(undefined8 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
      fVar19 = (float)uVar21;
      fVar16 = fVar19 - (float)*(undefined8 *)((long)puVar14 + 0xc);
      fVar22 = (float)((ulong)uVar21 >> 0x20);
      fVar17 = fVar22 - (float)((ulong)*(undefined8 *)((long)puVar14 + 0xc) >> 0x20);
      fVar18 = fVar23 - *(float *)((long)puVar14 + 0x14);
      if (_UNK_00e1fea0 <= fVar18 * fVar18 + fVar16 * fVar16 + fVar17 * fVar17) {
        if (cRam0000000004f9b65d == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9b65d = '\x01';
          puVar14 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        fVar16 = fVar19 - (float)*puVar14;
        fVar17 = fVar22 - (float)((ulong)*puVar14 >> 0x20);
        fVar18 = (fVar23 - *(float *)(puVar14 + 1)) * (fVar23 - *(float *)(puVar14 + 1));
        if (fVar20 <= fVar18 + fVar16 * fVar16 + fVar17 * fVar17) {
          lVar11 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
          fVar20 = (float)uVar21;
          if (lVar11 == 0) goto LAB_0227db90;
          fVar16 = (float)UnityEngine_Transform__get_localScale_43d1b0c(lVar11,0);
          lVar11 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
          if (lVar11 == 0) goto LAB_0227db90;
          UnityEngine_Transform__set_localScale_43d1be0
                    (fVar16 * fVar19,fVar18 * fVar22,fVar23 * fVar20,lVar11,0);
        }
      }
      lVar11 = *(long *)puVar3;
      if (*(int *)(lVar11 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
                    /* try { // try from 0227d8b4 to 0237d8d7 has its CatchHandler @ 0227d8b4
                       catch() { ... } // from try @ 0227d8b4 with catch @ 0227d8b4
                       catch() { ... } // from try @ 0227d8e0 with catch @ 0227d8b4 */
        lVar11 = *(long *)puVar3;
      }
      Coffee_UIExtensions_UIParticle__CollectSystems_214d0c4
                (param_1,**(undefined8 **)(lVar11 + 0xb8),0);
                    /* try { // try from 0227d8d8 to 0237d8df has its CatchHandler @ 0227d904 */
      if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
                    /* try { // try from 0227d8e0 to 0237d91f has its CatchHandler @ 0227d8b4 */
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_b8,**(long **)(*(long *)puVar3 + 0xb8),*(undefined8 *)PTR_DAT_04cab1c8);
        puVar4 = PTR_DAT_04cad3c8;
        puVar2 = PTR_DAT_04cab1a0;
                    /* catch() { ... } // from try @ 0227d8d8 with catch @ 0227d904 */
        puStack_98 = puStack_b0;
        uStack_a0 = uStack_b8;
        lStack_90 = lStack_a8;
        uStack_b8 = 0;
        puStack_b0 = &uStack_a0;
        while (uVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_a0,*(undefined8 *)puVar2), lVar11 = lStack_90,
              (uVar9 & 1) != 0) {
          if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uStack_58 = UnityEngine_ParticleSystem__get_main_443295c(lStack_90,0);
          iVar7 = UnityEngine_ParticleSystem_MainModule__get_scalingMode_4434094(&uStack_58,0);
          if (iVar7 == 1) {
            UnityEngine_ParticleSystem_MainModule__set_scalingMode_4434134(&uStack_58,0,0);
          }
          lVar11 = UnityEngine_Component__GetComponent_object__26f97e8(lVar11,*(undefined8 *)puVar4)
          ;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar11,0,0);
          if ((uVar9 & 1) == 0) {
            if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            UnityEngine_Renderer__set_sortingLayerID_43740cc(lVar11,uVar6,0);
            UnityEngine_Renderer__set_sortingOrder_4374244(lVar11,iVar5 + 1,0);
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_a0,*(undefined8 *)PTR_DAT_04cab198);
        lVar11 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar21 = Dino_BusSand_App_UI_UIParticleSorting__OwnerCanvasTransform_217dd40(lVar10);
        puVar2 = PTR_DAT_04cabe08;
        while( true ) {
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,0,0);
          if ((uVar9 & 1) == 0) {
            return;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar9 = UnityEngine_Object__op_Inequality_43c8dec(lVar11,uVar21,0);
          if ((uVar9 & 1) == 0) {
            return;
          }
          if (lVar11 == 0) break;
          lVar10 = UnityEngine_Transform__get_parent_43d0d70(lVar11,0);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar9 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
          if ((uVar9 & 1) != 0) {
            return;
          }
          iVar7 = UnityEngine_Transform__GetSiblingIndex_43d48f4(lVar11,0);
          if (lVar10 == 0) break;
          iVar8 = UnityEngine_Transform__get_childCount_43d4480(lVar10,0);
          iVar8 = iVar8 + 1;
          do {
            iVar15 = iVar7 + 1;
            if (iVar8 + -2 < iVar7 + 1) break;
            lVar11 = UnityEngine_Transform__GetChild_43d5294(lVar10,iVar8 + -2,0);
            if (lVar11 == 0) goto LAB_0227db90;
            uVar12 = UnityEngine_Component__GetComponentInChildren_object__26f9b94
                               (lVar11,1,*(undefined8 *)puVar2);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar1);
            }
            uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
            iVar8 = iVar8 + -1;
            iVar15 = iVar8;
          } while ((uVar9 & 1) == 0);
          iVar7 = UnityEngine_Transform__get_childCount_43d4480(lVar10,0);
          lVar11 = lVar10;
          if (iVar15 < iVar7) {
            do {
              lVar13 = UnityEngine_Transform__GetChild_43d5294(lVar10,iVar15,0);
              if (lVar13 == 0) goto LAB_0227db90;
              uVar12 = UnityEngine_Component__get_gameObject_43bcde8(lVar13,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              Dino_BusSand_App_UI_UIParticleSorting__Raise_217de64(uVar12,iVar5 + 2,uVar6);
              iVar15 = iVar15 + 1;
              iVar7 = UnityEngine_Transform__get_childCount_43d4480(lVar10,0);
            } while (iVar15 < iVar7);
          }
        }
      }
    }
  }
LAB_0227db90:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

