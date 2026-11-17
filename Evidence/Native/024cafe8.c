/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnFuelDone
void Dino_BusSand_View_MechanicLayer__OnFuelDone (Dino_BusSand_View_MechanicLayer_o* __this, int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnFuelDone
   void Dino_BusSand_View_MechanicLayer__OnFuelDone (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t id, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnFuelDone_23cafe8
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4,
               undefined4 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined4 uVar9;
  long lStack_38;
  
  puVar1 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c9e7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbd3a8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd3b8);
    FUN_02132f7c(PTR_DAT_04cbd3c0);
    FUN_02132f7c(PTR_DAT_04cbd3c8);
    bRam0000000004f9c9e7 = 1;
  }
  lStack_38 = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b94e == '\0') {
    FUN_02132f7c(PTR_DAT_04cad568);
    cRam0000000004f9b94e = '\x01';
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  if (**(long **)(lVar3 + 0xb8) != 0) {
    param_2 = 0;
    Dino_BusSand_GameAudio__Mechanic_2384944(0,**(long **)(lVar3 + 0xb8),1,0);
  }
  if (*(long *)(param_4 + 0x60) != 0) {
    uVar4 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_4 + 0x60),param_5,&lStack_38,*(undefined8 *)PTR_DAT_04cbd3a8)
    ;
    if ((uVar4 & 1) == 0) {
      return;
    }
    lVar3 = *(long *)(param_4 + 0x30);
    if (lVar3 != 0) {
      lVar3 = (**(code **)(lVar3 + 0x18))
                        (*(undefined8 *)(lVar3 + 0x40),param_5,*(undefined8 *)(lVar3 + 0x28));
      if (lVar3 != 0) {
        Dino_BusSand_View_VehicleView__SetOutline_23fc898(lVar3,0,0);
      }
      puVar1 = PTR_DAT_04ca9ae8;
      if (lStack_38 != 0) {
        uVar7 = *(undefined8 *)(lStack_38 + 0x50);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((uVar4 & 1) != 0) {
          if (lStack_38 == 0) goto LAB_024cb3c4;
          Dino_BusSand_View_MechanicLayer__Gulp_23ca6f4
                    (_UNK_00e207cc,param_4,*(undefined8 *)(lStack_38 + 0x50));
        }
        if (lStack_38 != 0) {
          uVar7 = *(undefined8 *)(lStack_38 + 0x40);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
          if ((uVar4 & 1) != 0) {
            lVar5 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd3c8);
            Dino_BusSand_View_MechanicLayer___c__DisplayClass113_0___ctor_23d3c88(lVar5,0);
            if (((lStack_38 == 0) || (*(long *)(lStack_38 + 0x40) == 0)) ||
               (lVar6 = TMPro_TextMeshPro__get_transform_430ef6c(*(long *)(lStack_38 + 0x40),0),
               lVar5 == 0)) goto LAB_024cb3c4;
            plVar8 = (long *)(lVar5 + 0x10);
            *plVar8 = lVar6;
            thunk_FUN_02134474(plVar8,lVar6);
            if (*plVar8 == 0) goto LAB_024cb3c4;
            uVar9 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar8,0);
            puVar2 = PTR_DAT_04cac208;
            *(undefined4 *)(lVar5 + 0x18) = uVar9;
            *(undefined4 *)(lVar5 + 0x1c) = param_2;
            *(undefined4 *)(lVar5 + 0x20) = param_3;
            uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
            System_Action_float____ctor_35f1448(uVar7,lVar5,*(undefined8 *)PTR_DAT_04cbd3b8,0);
            lVar6 = Dino_BusSand_Tween__Value_238bbfc(0x3e800000,uVar7,0);
            uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
            System_Action___ctor_47b5ed0(uVar7,lVar5,*(undefined8 *)PTR_DAT_04cbd3c0,0);
            if (((lVar6 == 0) ||
                (lVar5 = Dino_BusSand_Tween__OnDone_238bb74(lVar6,uVar7,0), lVar5 == 0)) ||
               (Dino_BusSand_Tween__SetOwner_238bb58(lVar5,param_4,0), lStack_38 == 0))
            goto LAB_024cb3c4;
            *(undefined8 *)(lStack_38 + 0x40) = 0;
            thunk_FUN_02134474((undefined8 *)(lStack_38 + 0x40),0);
          }
          Dino_BusSand_View_MechanicLayer__RetractHose_23ca284(param_4,lStack_38);
          if (lStack_38 != 0) {
            uVar7 = *(undefined8 *)(lStack_38 + 0x10);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
            if ((uVar4 & 1) != 0) {
              if ((lStack_38 == 0) ||
                 (Dino_BusSand_View_MechanicLayer__ShrinkAway_23ca4b8
                            (param_4,*(undefined8 *)(lStack_38 + 0x10)), lStack_38 == 0))
              goto LAB_024cb3c4;
              *(undefined8 *)(lStack_38 + 0x10) = 0;
              thunk_FUN_02134474((undefined8 *)(lStack_38 + 0x10),0);
              Dino_BusSand_View_MechanicLayer__FreeStation_23ca618(param_4,lStack_38);
            }
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
            if ((uVar4 & 1) != 0) {
              if (lVar3 == 0) goto LAB_024cb3c4;
              Dino_BusSand_View_VehicleView__Kick_23fd8a0(_UNK_00e207cc,_UNK_00e201f4,lVar3,0);
            }
            if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_Haptics__Play_2388ed8(2,0);
            return;
          }
        }
      }
    }
  }
LAB_024cb3c4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

