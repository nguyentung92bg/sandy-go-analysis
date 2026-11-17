/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnWaiting
void Dino_BusSand_View_MechanicLayer__OnWaiting (Dino_BusSand_View_MechanicLayer_o* __this, int32_t id, int32_t reason, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnWaiting
   void Dino_BusSand_View_MechanicLayer__OnWaiting (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t id, int32_t reason, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnWaiting_23cdc80
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  undefined4 uVar8;
  long lStack_38;
  
  puVar2 = PTR_DAT_04cbd500;
  puVar1 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c9f7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cbd3a8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd508);
    FUN_02132f7c(PTR_DAT_04cbd500);
    bRam0000000004f9c9f7 = 1;
  }
  lStack_38 = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass130_0___ctor_23d52ec(lVar3,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar1;
  }
  if (**(long **)(lVar4 + 0xb8) != 0) {
    param_2 = 0;
    Dino_BusSand_GameAudio__Mechanic_2384944((float)param_6,**(long **)(lVar4 + 0xb8),9,0);
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar4 = *(long *)(param_4 + 0x30);
  if (lVar4 != 0) {
    lVar4 = (**(code **)(lVar4 + 0x18))
                      (*(undefined8 *)(lVar4 + 0x40),param_5,*(undefined8 *)(lVar4 + 0x28));
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    if ((lVar4 != 0) && (*(long *)(lVar4 + 0x38) != 0)) {
      UnityEngine_Transform__get_right_43d15f4(*(long *)(lVar4 + 0x38),0);
      Dino_BusSand_View_VehicleView__Wiggle_23fda78(lVar4,0);
      if (*(long *)(param_4 + 0x60) != 0) {
        uVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                          (*(long *)(param_4 + 0x60),param_5,&lStack_38,
                           *(undefined8 *)PTR_DAT_04cbd3a8);
        if ((uVar5 & 1) == 0) {
          return;
        }
        if (param_6 == 1) {
          if (lStack_38 == 0) goto LAB_024cdf84;
          uVar6 = *(undefined8 *)(lStack_38 + 0x40);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
          if ((uVar5 & 1) == 0) {
            if (lStack_38 == 0) goto LAB_024cdf84;
            lVar4 = *(long *)(lStack_38 + 0x10);
          }
          else {
            if ((lStack_38 == 0) || (*(long *)(lStack_38 + 0x40) == 0)) goto LAB_024cdf84;
            lVar4 = TMPro_TextMeshPro__get_transform_430ef6c(*(long *)(lStack_38 + 0x40),0);
          }
        }
        else {
          if (lStack_38 == 0) goto LAB_024cdf84;
          lVar4 = *(long *)(lStack_38 + 0x18);
        }
        if (lVar3 != 0) {
          plVar7 = (long *)(lVar3 + 0x10);
          *plVar7 = lVar4;
          thunk_FUN_02134474(plVar7);
          lVar4 = *plVar7;
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
          if ((uVar5 & 1) != 0) {
            return;
          }
          if (*plVar7 != 0) {
            uVar8 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar7,0);
            puVar1 = PTR_DAT_04cac208;
            *(undefined4 *)(lVar3 + 0x18) = uVar8;
            *(undefined4 *)(lVar3 + 0x1c) = param_2;
            *(undefined4 *)(lVar3 + 0x20) = param_3;
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
            System_Action_float____ctor_35f1448(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cbd508,0);
            lVar3 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e20590,uVar6,0);
            if (lVar3 != 0) {
              Dino_BusSand_Tween__SetOwner_238bb58(lVar3,param_4,0);
              if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_Haptics__Play_2388ed8(1,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_024cdf84:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

