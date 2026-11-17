/* IL2CPP: Dino.BusSand.View.VehicleView$$EnsureLabel
void Dino_BusSand_View_VehicleView__EnsureLabel (Dino_BusSand_View_VehicleView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$EnsureLabel
   void Dino_BusSand_View_VehicleView__EnsureLabel (Dino_BusSand_View_VehicleView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_VehicleView__EnsureLabel_23fb7a4(long param_1)

{
  uint uVar1;
  float fVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  uint uStack_34;
  
  puVar3 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9cae5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbe000);
    FUN_02132f7c(PTR_DAT_04cbe008);
    bRam0000000004f9cae5 = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar10,0,0);
  puVar3 = PTR_DAT_04cbe008;
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c20cc(lVar5,*(undefined8 *)puVar3,0);
  if (lVar5 != 0) {
    lVar6 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
    uVar10 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
    if (lVar6 != 0) {
      UnityEngine_Transform__SetParent_43d1e34(lVar6,uVar10,0,0);
      uVar10 = UnityEngine_GameObject__get_transform_43c1048(lVar5,0);
      *(undefined8 *)(param_1 + 0x88) = uVar10;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x88),uVar10);
      lVar5 = Dino_BusSand_View_VehicleView__LabelText_23fb9c4
                        (0x40c00000,0x3f800000,0x3f800000,0x3f800000,0x3f800000,_UNK_00e20104,
                         param_1,*(undefined8 *)PTR_DAT_04cbe000,0xff501e28);
      plVar9 = (long *)(param_1 + 0x90);
      *plVar9 = lVar5;
      thunk_FUN_02134474(plVar9,lVar5);
      lVar5 = Dino_BusSand_View_VehicleView__TickMark_23fbc08(param_1);
      plVar11 = (long *)(param_1 + 0x98);
      *plVar11 = lVar5;
      thunk_FUN_02134474(plVar11,lVar5);
      if (*plVar11 != 0) {
        UnityEngine_Transform__set_localPosition_43cfda8(0,_UNK_00e203f4,_UNK_00e20280,*plVar11,0);
        if (*plVar9 != 0) {
          lVar5 = TMPro_TextMeshPro__get_transform_430ef6c(*plVar9,0);
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          if (lVar5 != 0) {
            puVar8 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
            UnityEngine_Transform__set_localPosition_43cfda8(*puVar8,puVar8[1],puVar8[2],lVar5,0);
            *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
            if ((bRam0000000004f9caea & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04ca9ae8);
              FUN_02132f7c(PTR_DAT_04cbd610);
              bRam0000000004f9caea = 1;
            }
            fVar2 = _UNK_00e20a7c;
            uStack_34 = 0;
            if (cRam0000000004f9b9dd == '\0') {
              FUN_02132f7c(PTR_DAT_04caa200);
              cRam0000000004f9b9dd = '\x01';
            }
            if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar7 = (uint)(fVar2 + 0.0);
            if (99 < (int)uVar7) {
              uVar7 = 100;
            }
            uVar1 = 0;
            if ((float)(int)(fVar2 + 0.0) != INFINITY) {
              uVar1 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
            }
            if (uVar1 != *(uint *)(param_1 + 0xa0)) {
              uVar10 = *(undefined8 *)(param_1 + 0x90);
              uStack_34 = uVar1;
              if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar10,0,0);
              if ((uVar4 & 1) == 0) {
                plVar9 = *(long **)(param_1 + 0x90);
                *(uint *)(param_1 + 0xa0) = uVar1;
                uVar10 = System_Int32__ToString_482d750(&uStack_34,0);
                uVar10 = System_String__Concat_46c82e0(uVar10,*(undefined8 *)PTR_DAT_04cbd610,0);
                if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                (**(code **)(*plVar9 + 0x518))(plVar9,uVar10,*(undefined8 *)(*plVar9 + 0x520));
              }
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

