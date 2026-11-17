/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnLiftRaised
void Dino_BusSand_View_MechanicLayer__OnLiftRaised (Dino_BusSand_View_MechanicLayer_o* __this, int32_t liftId, int32_t truckId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnLiftRaised
   void Dino_BusSand_View_MechanicLayer__OnLiftRaised (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t liftId, int32_t truckId, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnLiftRaised_23cbf2c
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined4 param_5,
               undefined4 param_6)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  long *plVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  long lStack_90;
  long *plStack_88;
  int iStack_54;
  
  puVar2 = PTR_DAT_04cbd400;
  if ((bRam0000000004f9c9ed & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbd408);
    FUN_02132f7c(PTR_DAT_04cbd410);
    FUN_02132f7c(PTR_DAT_04cb44e8);
    FUN_02132f7c(PTR_DAT_04cb1d00);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbd418);
    FUN_02132f7c(PTR_DAT_04cbd400);
    FUN_02132f7c(PTR_DAT_04cbd420);
    FUN_02132f7c(PTR_DAT_04cbd428);
    FUN_02132f7c(PTR_DAT_04cbd430);
    FUN_02132f7c(PTR_DAT_04cbd438);
    bRam0000000004f9c9ed = 1;
  }
  lStack_90 = 0;
  plStack_88 = (long *)0x0;
  iStack_54 = 0;
  lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass119_0___ctor_23d4708(lVar9,0);
  puVar2 = PTR_DAT_04cad568;
  if (lVar9 != 0) {
    *(long *)(lVar9 + 0x18) = param_4;
    thunk_FUN_02134474((long *)(lVar9 + 0x18),param_4);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar10 = *(long *)puVar2;
    if (*(int *)(lVar10 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar10 = *(long *)puVar2;
    }
    puVar2 = PTR_DAT_04cab238;
    if (**(long **)(lVar10 + 0xb8) != 0) {
      param_2 = 0.0;
      Dino_BusSand_GameAudio__Mechanic_2384944(0,**(long **)(lVar10 + 0xb8),4,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Haptics__Play_2388ed8(1,0);
    puVar2 = PTR_DAT_04ca9ae8;
    lVar10 = *(long *)(param_4 + 0x30);
    if (lVar10 != 0) {
      uVar11 = (**(code **)(lVar10 + 0x18))
                         (*(undefined8 *)(lVar10 + 0x40),param_6,*(undefined8 *)(lVar10 + 0x28));
      puVar15 = (undefined8 *)(lVar9 + 0x10);
      *puVar15 = uVar11;
      thunk_FUN_02134474(puVar15,uVar11);
      uVar11 = *puVar15;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar12 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
      if ((uVar12 & 1) != 0) {
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd428);
        Dino_BusSand_View_MechanicLayer___c__DisplayClass119_1___ctor_23d4844(lVar10,0);
        if (lVar10 == 0) goto LAB_024cc68c;
        plVar17 = (long *)(lVar10 + 0x30);
        *plVar17 = lVar9;
        thunk_FUN_02134474(plVar17,lVar9);
        if ((*plVar17 == 0) || (lVar9 = *(long *)(*plVar17 + 0x10), lVar9 == 0)) goto LAB_024cc68c;
        plVar16 = (long *)(lVar10 + 0x18);
        *plVar16 = *(long *)(lVar9 + 0x38);
        thunk_FUN_02134474(plVar16);
        if (*plVar16 == 0) goto LAB_024cc68c;
        fVar19 = (float)UnityEngine_Transform__get_position_43d0e48(*plVar16,0);
        cVar4 = cRam0000000004f9bcf8;
        lVar9 = *(long *)(lVar10 + 0x18);
        *(float *)(lVar10 + 0x20) = fVar19;
        *(float *)(lVar10 + 0x24) = param_2;
        *(float *)(lVar10 + 0x28) = param_3;
        if (cVar4 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9bcf8 = '\x01';
        }
        puVar3 = PTR_DAT_04caa208;
        if ((*plVar17 == 0) || (lVar13 = *(long *)(*plVar17 + 0x10), lVar13 == 0))
        goto LAB_024cc68c;
        uVar11 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x18);
        fVar21 = *(float *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0x20);
        fVar20 = (float)Dino_BusSand_View_VehicleView__get_ModelHeightWorld_23fefb0(lVar13,0);
        if (lVar9 == 0) goto LAB_024cc68c;
        param_2 = param_2 + (float)((ulong)uVar11 >> 0x20) * fVar20 * -1.1;
        param_3 = param_3 + fVar21 * fVar20 * _UNK_00e20044;
        UnityEngine_Transform__set_position_43d0f1c
                  (CONCAT44(param_2,fVar19 + (float)uVar11 * fVar20 * -1.1),param_2,lVar9,0);
        lVar9 = *(long *)(param_4 + 0xa0);
        *(undefined1 *)(lVar10 + 0x10) = 1;
        if (lVar9 == 0) goto LAB_024cc68c;
        uVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                           (lVar9,param_5,*(undefined8 *)PTR_DAT_04cbd408);
        uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
        System_Action_float____ctor_35f1448(uVar11,lVar10,*(undefined8 *)PTR_DAT_04cbd420,0);
        lVar9 = Dino_BusSand_Tween__Value_238bbfc(0x3f000000,uVar11,0);
        uVar18 = *(undefined8 *)(lVar10 + 0x30);
        uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
        System_Action___ctor_47b5ed0(uVar11,uVar18,*(undefined8 *)PTR_DAT_04cbd418,0);
        if ((lVar9 == 0) || (lVar9 = Dino_BusSand_Tween__OnDone_238bb74(lVar9,uVar11,0), lVar9 == 0)
           ) goto LAB_024cc68c;
        fVar19 = _UNK_00e1fe04;
        if ((uVar12 & 1) == 0) {
          fVar19 = 0.0;
        }
        param_2 = _UNK_00e1fe04;
        lVar9 = Dino_BusSand_Tween__SetDelay_238bb40(fVar19,lVar9,0);
        if (lVar9 == 0) goto LAB_024cc68c;
        Dino_BusSand_Tween__SetOwner_238bb58(lVar9,param_4,0);
        lVar9 = *(long *)(param_4 + 0x38);
        if (lVar9 != 0) {
          uVar22 = *(undefined4 *)(lVar10 + 0x20);
          param_2 = *(float *)(lVar10 + 0x24);
          param_3 = *(float *)(lVar10 + 0x28);
          if (cRam0000000004f9b65d == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9b65d = '\x01';
          }
          puVar14 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
          Dino_BusSand_View_Fx__Dust_2395354
                    (uVar22,param_2,param_3,*puVar14,puVar14[1],puVar14[2],_UNK_00e20094,lVar9,5,0);
          lVar9 = *(long *)(param_4 + 0x38);
          if (lVar9 != 0) {
            uVar11 = *(undefined8 *)(lVar10 + 0x20);
            param_3 = *(float *)(lVar10 + 0x28);
            if (cRam0000000004f9bcf8 == '\0') {
              FUN_02132f7c(PTR_DAT_04caa208);
              cRam0000000004f9bcf8 = '\x01';
            }
            lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
            param_2 = (float)((ulong)uVar11 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(lVar10 + 0x18) >> 0x20) *
                      *(float *)(param_4 + 0x50) * 0.15;
            param_3 = param_3 + *(float *)(lVar10 + 0x20) * *(float *)(param_4 + 0x50) *
                                _UNK_00e20328;
            Dino_BusSand_View_MechanicLayer__get_FxU_23bec9c(param_4);
            Dino_BusSand_View_Fx__Glow_2398b34(lVar9,0);
          }
        }
      }
      lVar9 = Dino_BusSand_View_MechanicLayer__FindLift_23cf0e8(param_4,param_5);
      if (*(long *)(param_4 + 0x90) != 0) {
        uVar12 = System_Collections_Generic_Dictionary_int__ValueTuple_object__object____TryGetValue_3408188
                           (*(long *)(param_4 + 0x90),param_5,&lStack_90,
                            *(undefined8 *)PTR_DAT_04cbd410);
        plVar17 = plStack_88;
        if ((uVar12 & 1) == 0) {
          return;
        }
        uVar11 = Dino_BusSand_View_MechanicLayer__LiftText_23c5938(param_4,lVar9);
        if (plVar17 != (long *)0x0) {
          (**(code **)(*plVar17 + 0x518))(plVar17,uVar11,*(undefined8 *)(*plVar17 + 0x520));
          if (*(long *)(param_4 + 0xf8) != 0) {
            uVar12 = System_Collections_Generic_Dictionary_int__int___TryGetValue_342ea24
                               (*(long *)(param_4 + 0xf8),param_5,&iStack_54,
                                *(undefined8 *)PTR_DAT_04cb44e8);
            iVar5 = iStack_54;
            if ((uVar12 & 1) == 0) {
              bVar6 = true;
            }
            else {
              iVar8 = UnityEngine_Time__get_frameCount_43cd710(0);
              bVar6 = iVar5 != iVar8;
            }
            lVar10 = *(long *)(param_4 + 0xf8);
            uVar22 = UnityEngine_Time__get_frameCount_43cd710(0);
            if (lVar10 != 0) {
              System_Collections_Generic_Dictionary_int__int___set_Item_342d0a4
                        (lVar10,param_5,uVar22,*(undefined8 *)PTR_DAT_04cb1d00);
              bVar1 = false;
              if (lVar9 != 0) {
                bVar1 = bVar6;
              }
              if (bVar1 == true) {
                Dino_BusSand_View_MechanicLayer__LiftWave_23cf23c(param_4,lVar9);
              }
              if (*(long *)(param_4 + 0xa0) != 0) {
                uVar12 = System_Collections_Generic_Dictionary_int__object___ContainsKey_3437520
                                   (*(long *)(param_4 + 0xa0),param_5,
                                    *(undefined8 *)PTR_DAT_04cbd408);
                lVar10 = lStack_90;
                if ((uVar12 & 1) == 0) {
                  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x28) != 0)) {
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    bVar7 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
                    if ((bVar6 & bVar7) == 1) {
                      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd438);
                      Dino_BusSand_View_MechanicLayer___c__DisplayClass119_2___ctor_23d4a30(lVar9,0)
                      ;
                      if (lVar9 != 0) {
                        plVar17 = (long *)(lVar9 + 0x10);
                        *plVar17 = lStack_90;
                        thunk_FUN_02134474(plVar17);
                        if (*plVar17 != 0) {
                          uVar22 = UnityEngine_Transform__get_localScale_43d1b0c(*plVar17,0);
                          puVar2 = PTR_DAT_04cac208;
                          *(undefined4 *)(lVar9 + 0x18) = uVar22;
                          *(float *)(lVar9 + 0x1c) = param_2;
                          *(float *)(lVar9 + 0x20) = param_3;
                          uVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                          System_Action_float____ctor_35f1448
                                    (uVar11,lVar9,*(undefined8 *)PTR_DAT_04cbd430,0);
                          lVar9 = Dino_BusSand_Tween__Value_238bbfc(_UNK_00e20590,uVar11,0);
                          if (lVar9 != 0) {
                            Dino_BusSand_Tween__SetOwner_238bb58(lVar9,param_4,0);
                            return;
                          }
                        }
                      }
                      goto LAB_024cc68c;
                    }
                  }
                }
                else if (bVar6 != false) {
                  Dino_BusSand_View_MechanicLayer__CycleDoor_23c7e08(param_4,param_5);
                }
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_024cc68c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

