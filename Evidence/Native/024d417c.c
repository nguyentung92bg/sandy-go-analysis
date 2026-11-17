/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass114_0$$<OnKey>b__1
void Dino_BusSand_View_MechanicLayer___c__DisplayClass114_0___OnKey_b__1 (Dino_BusSand_View_MechanicLayer___c__DisplayClass114_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer.<>c__DisplayClass114_0$$<OnKey>b__1
   void Dino_BusSand_View_MechanicLayer___c__DisplayClass114_0___OnKey_b__1
   (Dino_BusSand_View_MechanicLayer___c__DisplayClass114_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer___c__DisplayClass114_0___OnKey_b__1_23d417c
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  long lStack_58;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9ca0e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9ca0e = 1;
  }
  uVar7 = *(undefined8 *)(param_5 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_5 + 0x10) == 0) goto LAB_024d4228;
    uVar7 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_5 + 0x10),0);
    lVar6 = *(long *)puVar1;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar6);
    }
    UnityEngine_Object__Destroy_43c8114(uVar7,0);
  }
  puVar1 = PTR_DAT_04cbd530;
  lVar6 = *(long *)(param_5 + 0x20);
  if (lVar6 == 0) {
LAB_024d4228:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  uVar14 = *(undefined4 *)(param_5 + 0x48);
  if ((bRam0000000004f9c9e9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208,uVar14,0);
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
    *(long *)(lVar3 + 0x10) = lVar6;
    thunk_FUN_02134474((long *)(lVar3 + 0x10),lVar6);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar6,0,0);
    puVar2 = PTR_DAT_04cad568;
    if ((uVar5 & 1) != 0) {
      return;
    }
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar4 = *(long *)puVar2;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    if (**(long **)(lVar4 + 0xb8) != 0) {
      param_2 = 0;
      Dino_BusSand_GameAudio__Mechanic_2384944(0,**(long **)(lVar4 + 0xb8),2,0);
    }
    lVar4 = *(long *)(lVar6 + 0x30);
    if (lVar4 != 0) {
      lVar4 = (**(code **)(lVar4 + 0x18))
                        (*(undefined8 *)(lVar4 + 0x40),uVar14,*(undefined8 *)(lVar4 + 0x28));
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
      if ((uVar5 & 1) == 0) {
        lVar9 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
        if (lVar9 == 0) goto LAB_024ce998;
        uVar10 = UnityEngine_Transform__get_position_43d0e48(lVar9,0);
      }
      else {
        if (lVar4 == 0) goto LAB_024ce998;
        uVar10 = Dino_BusSand_View_VehicleView__get_RoofWorld_23fef10(lVar4,0);
      }
      if (*(long *)(lVar6 + 0x60) != 0) {
        uVar13 = param_3;
        uVar12 = param_2;
        uVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                          (*(long *)(lVar6 + 0x60),uVar14,&lStack_58,*(undefined8 *)PTR_DAT_04cbd3a8
                          );
        if ((uVar5 & 1) != 0) {
          if (lStack_58 == 0) goto LAB_024ce998;
          uVar7 = *(undefined8 *)(lStack_58 + 0x18);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
          if ((uVar5 & 1) != 0) {
            if (lStack_58 == 0) goto LAB_024ce998;
            plVar8 = (long *)(lVar3 + 0x18);
            *plVar8 = *(long *)(lStack_58 + 0x18);
            param_2 = uVar12;
            thunk_FUN_02134474(plVar8);
            if (lStack_58 == 0) goto LAB_024ce998;
            *(undefined8 *)(lStack_58 + 0x18) = 0;
            thunk_FUN_02134474((undefined8 *)(lStack_58 + 0x18),0);
            if (*plVar8 == 0) goto LAB_024ce998;
            uVar10 = UnityEngine_Transform__get_position_43d0e48(*plVar8,0);
            lVar9 = *plVar8;
            uVar14 = uVar13;
            uVar12 = param_2;
            uVar7 = UnityEngine_Component__get_transform_43bcd18(lVar6,0);
            if (lVar9 == 0) goto LAB_024ce998;
            UnityEngine_Transform__SetParent_43d1e34(lVar9,uVar7,1,0);
            if (*plVar8 == 0) goto LAB_024ce998;
            uVar11 = UnityEngine_Transform__get_position_43d0e48(*plVar8,0);
            *(undefined4 *)(lVar3 + 0x20) = uVar11;
            *(undefined4 *)(lVar3 + 0x24) = uVar12;
            *(undefined4 *)(lVar3 + 0x28) = uVar14;
            if (*(long *)(lVar3 + 0x18) == 0) goto LAB_024ce998;
            uVar11 = UnityEngine_Transform__get_localScale_43d1b0c(*(long *)(lVar3 + 0x18),0);
            *(undefined4 *)(lVar3 + 0x2c) = uVar11;
            *(undefined4 *)(lVar3 + 0x30) = uVar12;
            *(undefined4 *)(lVar3 + 0x34) = uVar14;
            if (*(long *)(lVar3 + 0x18) == 0) goto LAB_024ce998;
            uVar11 = UnityEngine_Transform__get_rotation_43d133c(*(long *)(lVar3 + 0x18),0);
            puVar2 = PTR_DAT_04cac208;
            *(undefined4 *)(lVar3 + 0x38) = uVar11;
            *(undefined4 *)(lVar3 + 0x3c) = uVar12;
            *(undefined4 *)(lVar3 + 0x40) = uVar14;
            *(undefined4 *)(lVar3 + 0x44) = param_4;
            uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
            System_Action_float____ctor_35f1448(uVar7,lVar3,*(undefined8 *)PTR_DAT_04cbd538,0);
            lVar9 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e208e8,uVar7,0);
            uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar7,lVar3,*(undefined8 *)PTR_DAT_04cbd540,0);
            if ((lVar9 == 0) ||
               (lVar3 = Dino_BusSand_Tween__OnDone_238bb74(lVar9,uVar7,0), lVar3 == 0))
            goto LAB_024ce998;
            Dino_BusSand_Tween__SetOwner_238bb58(lVar3,lVar6,0);
            param_3 = uVar13;
          }
        }
        Dino_BusSand_View_MechanicLayer__UnlockBurst_23ce99c(uVar10,param_2,param_3,lVar6);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar4,0,0);
        if ((uVar5 & 1) != 0) {
          if (lVar4 == 0) goto LAB_024ce998;
          Dino_BusSand_View_VehicleView__Kick_23fd8a0(_UNK_00e20590,_UNK_00e20328,lVar4,0);
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

