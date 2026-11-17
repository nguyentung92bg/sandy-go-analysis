/* IL2CPP: Dino.BusSand.View.Fx$$Update
void Dino_BusSand_View_Fx__Update (Dino_BusSand_View_Fx_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.Fx$$Update
   void Dino_BusSand_View_Fx__Update (Dino_BusSand_View_Fx_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_Fx__Update_239980c(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar28;
  float fVar29;
  long *plStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000004f9c8f5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc260);
    FUN_02132f7c(PTR_DAT_04cbc268);
    FUN_02132f7c(PTR_DAT_04cbc270);
    FUN_02132f7c(PTR_DAT_04cbc278);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc258);
    bRam0000000004f9c8f5 = 1;
  }
  fVar23 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
  puVar12 = PTR_DAT_04cbc278;
  puVar11 = PTR_DAT_04cbc270;
  puVar10 = PTR_DAT_04cbc260;
  puVar9 = PTR_DAT_04cbc258;
  puVar8 = PTR_DAT_04caa208;
  puVar7 = PTR_DAT_04ca9ae8;
  fVar6 = _UNK_00e20a0c;
  fVar5 = _UNK_00e20994;
  fVar4 = _UNK_00e2098c;
  fVar3 = _UNK_00e208e8;
  fVar2 = _UNK_00e208cc;
  fVar1 = _UNK_00e20090;
  if (*(long *)(param_1 + 0x68) != 0) {
    iVar22 = *(int *)(*(long *)(param_1 + 0x68) + 0x18);
    if (-1 < iVar22 + -1) {
      do {
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_02499c58;
        iVar22 = iVar22 + -1;
        System_Collections_Generic_List_ValueTuple_object__float__float__Vector3____get_Item_39dc178
                  (&plStack_c0,*(long *)(param_1 + 0x68),iVar22,*(undefined8 *)puVar11);
        uVar20 = uStack_b0;
        plVar13 = plStack_c0;
        fVar28 = (float)uStack_b8;
        fVar14 = uStack_b8._4_4_;
        fVar15 = (float)uStack_b0;
        fVar16 = uStack_b0._4_4_;
        fVar17 = (float)uStack_a8;
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar18 = UnityEngine_Object__op_Equality_43c6f30(plVar13,0,0);
        if (((uVar18 & 1) != 0) || (fVar28 = fVar23 + fVar28, fVar14 <= fVar28)) {
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar20 = UnityEngine_Object__op_Inequality_43c8dec(plVar13,0,0);
          if ((uVar20 & 1) != 0) {
            if (plVar13 == (long *)0x0) goto LAB_02499c58;
            uVar27 = UnityEngine_Component__get_gameObject_43bcde8(plVar13,0);
            if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac(*(long *)puVar7);
            }
            UnityEngine_Object__Destroy_43c8114(uVar27,0);
          }
          if (*(long *)(param_1 + 0x68) == 0) goto LAB_02499c58;
          System_Collections_Generic_List_ValueTuple_object__float__float__Vector3____RemoveAt_39dde98
                    (*(long *)(param_1 + 0x68),iVar22,*(undefined8 *)puVar10);
        }
        else {
          fVar29 = fVar28 / fVar14;
          fVar25 = 1.0;
          if (fVar29 < fVar2) {
            fVar24 = fVar29 / fVar2;
            fVar25 = 1.0;
            if (fVar24 <= 1.0) {
              fVar25 = fVar24;
            }
            fVar26 = -1.0;
            if (0.0 <= fVar24) {
              fVar26 = fVar25 + -1.0;
            }
            fVar25 = (float)func_0x049b5300(fVar26,0x40400000);
            fVar25 = fVar26 * fVar26 * fVar1 + fVar25 * fVar6 + 1.0;
          }
          if (plVar13 == (long *)0x0) goto LAB_02499c58;
          lVar19 = TMPro_TextMeshPro__get_transform_430ef6c(plVar13,0);
          if (cRam0000000004f9b65e == '\0') {
            FUN_02132f7c(puVar8);
            cRam0000000004f9b65e = '\x01';
          }
          if (lVar19 == 0) goto LAB_02499c58;
          fVar24 = *(float *)(param_1 + 0x58);
          lVar21 = *(long *)(*(long *)puVar8 + 0xb8);
          uVar27 = *(undefined8 *)(lVar21 + 0xc);
          fVar26 = (float)((ulong)uVar27 >> 0x20) * fVar24 * 0.7 * fVar25;
          UnityEngine_Transform__set_localScale_43d1be0
                    (CONCAT44(fVar26,(float)uVar27 * fVar24 * 0.7 * fVar25),fVar26,
                     fVar25 * *(float *)(lVar21 + 0x14) * fVar24 * fVar5,lVar19,0);
          lVar19 = TMPro_TextMeshPro__get_transform_430ef6c(plVar13,0);
          if (lVar19 == 0) goto LAB_02499c58;
          fVar24 = *(float *)(param_1 + 0x58);
          fVar25 = 1.0;
          if (fVar29 <= 1.0) {
            fVar25 = fVar29;
          }
          fVar26 = 1.0;
          if (0.0 <= fVar29) {
            fVar26 = 1.0 - fVar25;
          }
          fVar25 = (float)func_0x049b5300(fVar26,0x40400000);
          fVar25 = 1.0 - fVar25;
          UnityEngine_Transform__set_position_43d0f1c
                    (fVar15 + fVar25 * fVar24 * 0.0,fVar16 + fVar25 * fVar24 * fVar4,
                     fVar17 + fVar25 * fVar24 * fVar3,lVar19,0);
          (**(code **)(*plVar13 + 0x298))(plVar13,*(undefined8 *)(*plVar13 + 0x2a0));
          (**(code **)(*plVar13 + 0x2a8))(plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
          lVar19 = *(long *)(param_1 + 0x68);
          uStack_d8 = 0;
          plStack_e0 = (long *)0x0;
          uStack_c8 = 0;
          uStack_d0 = 0;
          System_ValueTuple_object__float__float__Vector3____ctor_311f400
                    (fVar28,fVar14,uVar20 & 0xffffffff,fVar16,fVar17,&plStack_e0,plVar13,
                     *(undefined8 *)puVar9);
          if (lVar19 == 0) goto LAB_02499c58;
          uStack_b8 = uStack_d8;
          plStack_c0 = plStack_e0;
          uStack_a8 = uStack_c8;
          uStack_b0 = uStack_d0;
          System_Collections_Generic_List_ValueTuple_object__float__float__Vector3____set_Item_39dc1d8
                    (lVar19,iVar22,&plStack_c0,*(undefined8 *)puVar12);
        }
      } while (0 < iVar22);
    }
    return;
  }
LAB_02499c58:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

