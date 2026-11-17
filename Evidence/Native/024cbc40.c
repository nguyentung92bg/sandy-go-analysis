/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnShift
void Dino_BusSand_View_MechanicLayer__OnShift (Dino_BusSand_View_MechanicLayer_o* __this, int32_t id, int32_t newAngle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnShift
   void Dino_BusSand_View_MechanicLayer__OnShift (Dino_BusSand_View_MechanicLayer_o* __this, int32_t
   id, int32_t newAngle, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnShift_23cbc40
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined4 param_4,
               long param_5,undefined4 param_6,undefined4 param_7)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lStack_48;
  
  puVar1 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c9ec & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cbd3a8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd3f0);
    FUN_02132f7c(PTR_DAT_04cbd3f8);
    bRam0000000004f9c9ec = 1;
  }
  lStack_48 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  if (**(long **)(lVar2 + 0xb8) != 0) {
    param_2 = 0;
    Dino_BusSand_GameAudio__Mechanic_2384944(0,**(long **)(lVar2 + 0xb8),3,0);
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar2 = *(long *)(param_5 + 0x30);
  if (lVar2 != 0) {
    lVar2 = (**(code **)(lVar2 + 0x18))
                      (*(undefined8 *)(lVar2 + 0x40),param_6,*(undefined8 *)(lVar2 + 0x28));
    lVar4 = *(long *)puVar1;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac(lVar4);
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(lVar2,0,0);
    uVar9 = _UNK_00e203f4;
    if ((uVar3 & 1) != 0) {
      return;
    }
    if (lVar2 != 0) {
      Dino_BusSand_View_VehicleView__TurnParkedTo_23fd36c(_UNK_00e203f4,lVar2,param_7,0);
      if (*(long *)(param_5 + 0x60) != 0) {
        uVar3 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                          (*(long *)(param_5 + 0x60),param_6,&lStack_48,
                           *(undefined8 *)PTR_DAT_04cbd3a8);
        if ((uVar3 & 1) != 0) {
          if (lStack_48 == 0) goto LAB_024cbf28;
          uVar6 = *(undefined8 *)(lStack_48 + 0x28);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
          if ((uVar3 & 1) != 0) {
            lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd3f8);
            Dino_BusSand_View_MechanicLayer___c__DisplayClass118_0___ctor_23d45a0(lVar4,0);
            if ((lStack_48 == 0) || (lVar4 == 0)) goto LAB_024cbf28;
            plVar7 = (long *)(lVar4 + 0x10);
            *plVar7 = *(long *)(lStack_48 + 0x28);
            thunk_FUN_02134474(plVar7);
            if (*plVar7 == 0) goto LAB_024cbf28;
            uVar8 = UnityEngine_Transform__get_localRotation_43d14b0(*plVar7,0);
            puVar1 = PTR_DAT_04cac208;
            *(undefined4 *)(lVar4 + 0x18) = uVar8;
            *(undefined4 *)(lVar4 + 0x1c) = param_2;
            *(undefined4 *)(lVar4 + 0x20) = param_3;
            *(undefined4 *)(lVar4 + 0x24) = param_4;
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
            System_Action_float____ctor_35f1448(uVar6,lVar4,*(undefined8 *)PTR_DAT_04cbd3f0,0);
            lVar4 = Dino_BusSand_Tween__Value_238bbfc(uVar9,uVar6,0);
            if (lVar4 == 0) goto LAB_024cbf28;
            Dino_BusSand_Tween__SetOwner_238bb58(lVar4,param_5,0);
          }
        }
        lVar4 = *(long *)(param_5 + 0x38);
        if (lVar4 != 0) {
          if (*(long *)(lVar2 + 0x38) == 0) goto LAB_024cbf28;
          uVar9 = UnityEngine_Transform__get_position_43d0e48(*(long *)(lVar2 + 0x38),0);
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          puVar5 = *(undefined4 **)(*(long *)PTR_DAT_04caa208 + 0xb8);
          Dino_BusSand_View_Fx__Dust_2395354
                    (uVar9,param_2,param_3,*puVar5,puVar5[1],puVar5[2],_UNK_00e2094c,lVar4,3,0);
        }
        return;
      }
    }
  }
LAB_024cbf28:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

