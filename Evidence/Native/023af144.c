/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel.<PlayStaggered>d__23$$MoveNext
bool Dino_BusSand_App_UI_CommonGetPanel__PlayStaggered_d__23__MoveNext (Dino_BusSand_App_UI_CommonGetPanel__PlayStaggered_d__23_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.CommonGetPanel.<PlayStaggered>d__23$$MoveNext
   bool Dino_BusSand_App_UI_CommonGetPanel__PlayStaggered_d__23__MoveNext
   (Dino_BusSand_App_UI_CommonGetPanel__PlayStaggered_d__23_o* __this, const MethodInfo* method); */

ulong Dino_BusSand_App_UI_CommonGetPanel__PlayStaggered_d__23__MoveNext_22af144(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  float extraout_s0;
  float fVar16;
  
  if ((bRam0000000004f9c2c2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7b8);
    FUN_02132f7c(PTR_DAT_04cb5fe0);
    FUN_02132f7c(PTR_DAT_04cb5fe8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
    FUN_02132f7c(PTR_DAT_04cb0458);
    FUN_02132f7c(PTR_DAT_04cb03c8);
    FUN_02132f7c(PTR_DAT_04caef88);
    bRam0000000004f9c2c2 = 1;
  }
  puVar5 = PTR_DAT_04cb5fe8;
  puVar4 = PTR_DAT_04cb03c8;
  puVar3 = PTR_DAT_04cac7b8;
  puVar2 = PTR_DAT_04caa208;
  puVar1 = PTR_DAT_04ca9ae8;
  iVar8 = *(int *)(param_1 + 0x10);
  lVar12 = *(long *)(param_1 + 0x20);
  uVar6 = 0;
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      puVar4 = PTR_DAT_04caef88;
      if (lVar12 == 0) goto LAB_023af68c;
      *(undefined1 *)(lVar12 + 0x48) = 1;
      lVar12 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(lVar12,*(undefined8 *)puVar4,0);
      plVar13 = (long *)(param_1 + 0x28);
      *plVar13 = lVar12;
      thunk_FUN_02134474(plVar13,lVar12);
      lVar12 = *plVar13;
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      lVar12 = Dino_BusSand_App_UI_CommerceUi__Anim_22ac584(lVar12);
      plVar15 = (long *)(param_1 + 0x30);
      *plVar15 = lVar12;
      thunk_FUN_02134474(plVar15,lVar12);
      uVar14 = *(undefined8 *)(param_1 + 0x28);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
      if ((uVar6 & 1) != 0) {
        lVar12 = *plVar15;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(lVar12,0,0);
        if ((uVar6 & 1) != 0) {
          uVar6 = 0;
          if (*plVar15 == 0) {
LAB_023af68c:
                    /* WARNING: Subroutine does not return */
            FUN_02133224(uVar6);
          }
          uVar14 = UnityEngine_Animation__get_Item_4334ee8
                             (*plVar15,*(undefined8 *)PTR_DAT_04cb0458,0);
          uVar6 = UnityEngine_TrackedReference__op_Inequality_43c6a68(uVar14,0,0);
          if ((uVar6 & 1) != 0) {
            lVar12 = *plVar13;
            if (cRam0000000004f9b65d == '\0') {
              uVar6 = FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65d = '\x01';
            }
            if (lVar12 == 0) goto LAB_023af68c;
            puVar10 = *(undefined4 **)(*(long *)puVar2 + 0xb8);
            UnityEngine_Transform__set_localScale_43d1be0(*puVar10,puVar10[1],puVar10[2],lVar12,0);
          }
        }
      }
      uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e208ec,uVar14,0);
      *(undefined8 *)(param_1 + 0x18) = uVar14;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar14);
      uVar6 = 1;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else if (iVar8 == 1) {
      iVar8 = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x38) = 0x3eb33333;
      goto LAB_023af518;
    }
  }
  else {
    if (iVar8 == 2) {
      iVar8 = *(int *)(param_1 + 0x3c);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      while( true ) {
        iVar8 = iVar8 + 1;
        *(int *)(param_1 + 0x3c) = iVar8;
LAB_023af518:
        if (lVar12 == 0) goto LAB_023af68c;
        lVar11 = *(long *)(lVar12 + 0x40);
        uVar6 = 0;
        if (lVar11 == 0) goto LAB_023af68c;
        if (*(int *)(lVar11 + 0x18) <= iVar8) {
          fVar16 = *(float *)(param_1 + 0x38);
          if (fVar16 <= 0.0) goto LAB_023af574;
          uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
          UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(fVar16,uVar14,0);
          *(undefined8 *)(param_1 + 0x18) = uVar14;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar14);
          uVar9 = 3;
          goto LAB_023af680;
        }
        uVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                           (lVar11,iVar8,*(undefined8 *)puVar5);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)puVar3);
        }
        uVar6 = Dino_BusSand_App_UI_CommerceUi__Play_22a8904(uVar14,*(undefined8 *)puVar4);
        if (extraout_s0 <= 0.0) {
          uVar6 = 0;
          if (*(long *)(lVar12 + 0x40) == 0) goto LAB_023af68c;
          uVar14 = System_Collections_Generic_List_object___get_Item_3a81924
                             (*(long *)(lVar12 + 0x40),*(undefined4 *)(param_1 + 0x3c),
                              *(undefined8 *)puVar5);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
          uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
          if ((uVar6 & 1) != 0) {
            uVar6 = 0;
            if (*(long *)(lVar12 + 0x40) == 0) goto LAB_023af68c;
            lVar11 = System_Collections_Generic_List_object___get_Item_3a81924
                               (*(long *)(lVar12 + 0x40),*(undefined4 *)(param_1 + 0x3c),
                                *(undefined8 *)puVar5);
            uVar6 = 0;
            if (lVar11 == 0) goto LAB_023af68c;
            uVar7 = UnityEngine_Component__get_transform_43bcd18(lVar11,0);
            uVar6 = uVar7;
            if (cRam0000000004f9b65e == '\0') {
              uVar6 = FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9b65e = '\x01';
            }
            if (uVar7 == 0) goto LAB_023af68c;
            lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
            uVar6 = UnityEngine_Transform__set_localScale_43d1be0
                              (*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
                               *(undefined4 *)(lVar11 + 0x14),uVar7,0);
          }
        }
        if (*(long *)(lVar12 + 0x40) == 0) goto LAB_023af68c;
        iVar8 = *(int *)(param_1 + 0x3c);
        if (iVar8 < *(int *)(*(long *)(lVar12 + 0x40) + 0x18) + -1) break;
        if (0.0 < extraout_s0) {
          *(float *)(param_1 + 0x38) = extraout_s0;
        }
      }
      uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20754,uVar14,0);
      *(undefined8 *)(param_1 + 0x18) = uVar14;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar14);
      uVar9 = 2;
    }
    else {
      if (iVar8 != 3) {
        if (iVar8 != 4) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (lVar12 != 0) {
          *(undefined1 *)(lVar12 + 0x48) = 0;
          return 0;
        }
        goto LAB_023af68c;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
LAB_023af574:
      uVar14 = *(undefined8 *)(param_1 + 0x30);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar16 = (float)Dino_BusSand_App_UI_CommerceUi__Play_22a8904
                                (uVar14,*(undefined8 *)PTR_DAT_04cb0458);
      if (fVar16 <= 0.0) {
        uVar14 = *(undefined8 *)(param_1 + 0x28);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar14,0,0);
        if ((uVar6 & 1) != 0) {
          lVar12 = *(long *)(param_1 + 0x28);
          if (cRam0000000004f9b65e == '\0') {
            uVar6 = FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65e = '\x01';
          }
          if (lVar12 == 0) goto LAB_023af68c;
          lVar11 = *(long *)(*(long *)puVar2 + 0xb8);
          UnityEngine_Transform__set_localScale_43d1be0
                    (*(undefined4 *)(lVar11 + 0xc),*(undefined4 *)(lVar11 + 0x10),
                     *(undefined4 *)(lVar11 + 0x14),lVar12,0);
        }
      }
      uVar14 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e206e8,uVar14,0);
      *(undefined8 *)(param_1 + 0x18) = uVar14;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar14);
      uVar9 = 4;
    }
LAB_023af680:
    *(undefined4 *)(param_1 + 0x10) = uVar9;
    uVar6 = 1;
  }
  return uVar6;
}

