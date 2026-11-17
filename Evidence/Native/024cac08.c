/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnFuelTick
void Dino_BusSand_View_MechanicLayer__OnFuelTick (Dino_BusSand_View_MechanicLayer_o* __this, int32_t id, int32_t left, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnFuelTick
   void Dino_BusSand_View_MechanicLayer__OnFuelTick (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t id, int32_t left, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnFuelTick_23cac08
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined4 param_5,
               int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long *plVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  long lStack_60;
  int iStack_54;
  
  puVar2 = PTR_DAT_04cbd3a0;
  puVar1 = PTR_DAT_04cad568;
  iStack_54 = param_6;
  if ((bRam0000000004f9c9e6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04cbd3a8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd3b0);
    FUN_02132f7c(PTR_DAT_04cbd3a0);
    bRam0000000004f9c9e6 = 1;
  }
  lStack_60 = 0;
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass112_0___ctor_23d3bb0(lVar3,0);
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
    param_3 = 0.0;
    fVar8 = (float)param_6 / -6.0 + 1.0;
    fVar12 = 1.0;
    if (fVar8 <= 1.0) {
      fVar12 = fVar8;
    }
    fVar11 = 0.0;
    if (0.0 <= fVar8) {
      fVar11 = fVar12;
    }
    param_2 = 0.0;
    Dino_BusSand_GameAudio__Mechanic_2384944(fVar11,**(long **)(lVar4 + 0xb8),0,0);
  }
  if (*(long *)(param_4 + 0x60) != 0) {
    uVar5 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_4 + 0x60),param_5,&lStack_60,*(undefined8 *)PTR_DAT_04cbd3a8)
    ;
    puVar1 = PTR_DAT_04ca9ae8;
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (lStack_60 != 0) {
      uVar6 = *(undefined8 *)(lStack_60 + 0x40);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
      if ((uVar5 & 1) != 0) {
        return;
      }
      if (lStack_60 != 0) {
        plVar7 = *(long **)(lStack_60 + 0x40);
        *(int *)(lStack_60 + 0xb0) = iStack_54;
        uVar6 = System_Int32__ToString_482d750(&iStack_54,0);
        if ((((plVar7 != (long *)0x0) &&
             ((**(code **)(*plVar7 + 0x518))(plVar7,uVar6,*(undefined8 *)(*plVar7 + 0x520)),
             lStack_60 != 0)) && (*(long *)(lStack_60 + 0x40) != 0)) &&
           (lVar4 = TMPro_TextMeshPro__get_transform_430ef6c(*(long *)(lStack_60 + 0x40),0),
           lVar3 != 0)) {
          plVar7 = (long *)(lVar3 + 0x10);
          *plVar7 = lVar4;
          thunk_FUN_02134474(plVar7,lVar4);
          if (*plVar7 != 0) {
            uVar9 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar7,0);
            puVar2 = PTR_DAT_04cac208;
            *(undefined4 *)(lVar3 + 0x18) = uVar9;
            *(float *)(lVar3 + 0x1c) = param_2;
            *(float *)(lVar3 + 0x20) = param_3;
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
            System_Action_float____ctor_35f1448(uVar6,lVar3,*(undefined8 *)PTR_DAT_04cbd3b0,0);
            lVar3 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e208d0,uVar6,0);
            if ((lVar3 != 0) &&
               (Dino_BusSand_Tween__SetOwner_238bb58(lVar3,param_4,0), lStack_60 != 0)) {
              uVar6 = *(undefined8 *)(lStack_60 + 0x50);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
              if ((uVar5 & 1) == 0) {
                if (lStack_60 != 0) {
                  uVar6 = *(undefined8 *)(lStack_60 + 0x10);
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
                  if ((uVar5 & 1) == 0) {
                    return;
                  }
                  lVar3 = *(long *)(param_4 + 0x38);
                  if (lVar3 == 0) {
                    return;
                  }
                  if ((lStack_60 != 0) && (*(long *)(lStack_60 + 0x10) != 0)) {
                    fVar10 = (float)UnityEngine_Transform__get_position_43d0e48
                                              (*(long *)(lStack_60 + 0x10),0);
                    fVar12 = param_3;
                    fVar8 = param_2;
                    fVar11 = (float)FUN_0230c344(0);
                    fVar13 = *(float *)(param_4 + 0x50);
                    param_3 = param_3 + fVar12 * fVar13 * _UNK_00e20994;
                    param_2 = param_2 + fVar8 * fVar13 * _UNK_00e20994;
                    fVar10 = fVar10 + fVar11 * fVar13 * _UNK_00e20994;
                    uVar9 = _UNK_00e20180;
                    uVar14 = _UNK_00e207cc;
                    goto LAB_024cafb8;
                  }
                }
              }
              else if (lStack_60 != 0) {
                Dino_BusSand_View_MechanicLayer__Gulp_23ca6f4
                          (0x3f000000,param_4,*(undefined8 *)(lStack_60 + 0x50));
                lVar3 = *(long *)(param_4 + 0x38);
                if (lVar3 == 0) {
                  return;
                }
                if (lStack_60 != 0) {
                  param_2 = *(float *)(lStack_60 + 0x5c);
                  param_3 = *(float *)(lStack_60 + 0x60);
                  fVar10 = *(float *)(lStack_60 + 0x58);
                  uVar9 = _UNK_00e2094c;
                  uVar14 = _UNK_00e20590;
LAB_024cafb8:
                  Dino_BusSand_View_Fx__Glow_2398b34
                            (fVar10,param_2,param_3,0x3f800000,uVar9,uVar14,0x3f800000,_UNK_00e200f8
                             ,lVar3,0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

