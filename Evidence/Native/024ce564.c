/* IL2CPP: Dino.BusSand.View.MechanicLayer$$UnlockVisual
void Dino_BusSand_View_MechanicLayer__UnlockVisual (Dino_BusSand_View_MechanicLayer_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$UnlockVisual
   void Dino_BusSand_View_MechanicLayer__UnlockVisual (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t id, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__UnlockVisual_23ce564
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined4 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lStack_58;
  
  puVar1 = PTR_DAT_04cbd530;
  if ((bRam0000000004f9c9e9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbd3a8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd538);
    FUN_02132f7c(PTR_DAT_04cbd540);
    FUN_02132f7c(PTR_DAT_04cbd530);
    bRam0000000004f9c9e9 = 1;
  }
  lStack_58 = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass115_0___ctor_23d422c(lVar3,0);
  puVar1 = PTR_DAT_04ca9ae8;
  if (lVar3 != 0) {
    *(long *)(lVar3 + 0x10) = param_5;
    thunk_FUN_02134474((long *)(lVar3 + 0x10),param_5);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(param_5,0,0);
    puVar2 = PTR_DAT_04cad568;
    if ((uVar4 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      param_2 = 0;
      Dino_BusSand_GameAudio__Mechanic_2384944(0,**(long **)(lVar5 + 0xb8),2,0);
    }
    lVar5 = *(long *)(param_5 + 0x30);
    if (lVar5 != 0) {
      lVar5 = (**(code **)(lVar5 + 0x18))
                        (*(undefined8 *)(lVar5 + 0x40),param_6,*(undefined8 *)(lVar5 + 0x28));
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
      if ((uVar4 & 1) == 0) {
        lVar8 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
        if (lVar8 == 0) goto LAB_024ce998;
        uVar9 = UnityEngine_Transform__get_position_43d0e48(lVar8,0);
      }
      else {
        if (lVar5 == 0) goto LAB_024ce998;
        uVar9 = Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lVar5,0);
      }
      if (*(long *)(param_5 + 0x60) != 0) {
        uVar12 = param_3;
        uVar13 = param_2;
        uVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                          (*(long *)(param_5 + 0x60),param_6,&lStack_58,
                           *(undefined8 *)PTR_DAT_04cbd3a8);
        if ((uVar4 & 1) != 0) {
          if (lStack_58 == 0) goto LAB_024ce998;
          uVar6 = *(undefined8 *)(lStack_58 + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
          if ((uVar4 & 1) != 0) {
            if (lStack_58 == 0) goto LAB_024ce998;
            plVar7 = (long *)(lVar3 + 0x18);
            *plVar7 = *(long *)(lStack_58 + 0x18);
            param_2 = uVar13;
            thunk_FUN_02134474(plVar7);
            if (lStack_58 == 0) goto LAB_024ce998;
            *(undefined8 *)(lStack_58 + 0x18) = 0;
            thunk_FUN_02134474((undefined8 *)(lStack_58 + 0x18),0);
            if (*plVar7 == 0) goto LAB_024ce998;
            uVar9 = UnityEngine_Transform__get_position_43d0e48(*plVar7,0);
            lVar8 = *plVar7;
            uVar13 = uVar12;
            uVar11 = param_2;
            uVar6 = UnityEngine_Component__get_transform_43bcd18(param_5,0);
            if (lVar8 == 0) goto LAB_024ce998;
            UnityEngine_Transform__SetParent_43d1e34(lVar8,uVar6,1,0);
            if (*plVar7 == 0) goto LAB_024ce998;
            uVar10 = UnityEngine_Transform__get_position_43d0e48(*plVar7,0);
            *(undefined4 *)(lVar3 + 0x20) = uVar10;
            *(undefined4 *)(lVar3 + 0x24) = uVar11;
            *(undefined4 *)(lVar3 + 0x28) = uVar13;
            if (*(long *)(lVar3 + 0x18) == 0) goto LAB_024ce998;
            uVar10 = UnityEngine_Transform__get_localScale_43d1b0c(*(long *)(lVar3 + 0x18),0);
            *(undefined4 *)(lVar3 + 0x2c) = uVar10;
            *(undefined4 *)(lVar3 + 0x30) = uVar11;
            *(undefined4 *)(lVar3 + 0x34) = uVar13;
            if (*(long *)(lVar3 + 0x18) == 0) goto LAB_024ce998;
            uVar10 = UnityEngine_Transform__get_rotation_43d133c(*(long *)(lVar3 + 0x18),0);
            puVar2 = PTR_DAT_04cac208;
            *(undefined4 *)(lVar3 + 0x38) = uVar10;
            *(undefined4 *)(lVar3 + 0x3c) = uVar11;
            *(undefined4 *)(lVar3 + 0x40) = uVar13;
            *(undefined4 *)(lVar3 + 0x44) = param_4;
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
            System_Action_float____ctor_35f1448(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cbd538,0);
            lVar8 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e208e8,uVar6,0);
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cbd540,0);
            if ((lVar8 == 0) ||
               (lVar3 = Dino_BusSand_Tween__OnDone_238bb74(lVar8,uVar6,0), lVar3 == 0))
            goto LAB_024ce998;
            Dino_BusSand_Tween__SetOwner_238bb58(lVar3,param_5,0);
            param_3 = uVar12;
          }
        }
        Dino_BusSand_View_MechanicLayer__UnlockBurst_23ce99c(uVar9,param_2,param_3,param_5);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar5,0,0);
        if ((uVar4 & 1) != 0) {
          if (lVar5 == 0) goto LAB_024ce998;
          Dino_BusSand_View_VehicleView__Kick_23fd8a0(_UNK_00e20590,_UNK_00e20328,lVar5,0);
        }
        if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Haptics__Play_2388ed8(2,0);
        return;
      }
    }
  }
LAB_024ce998:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

