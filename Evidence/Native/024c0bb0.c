/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildLift
void Dino_BusSand_View_MechanicLayer__BuildLift (Dino_BusSand_View_MechanicLayer_o* __this, Dino_BusSand_Core_Lift_o* lift, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024c0f54) */
/* WARNING: Removing unreachable block (ram,0x024c1350) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$BuildLift
   void Dino_BusSand_View_MechanicLayer__BuildLift (Dino_BusSand_View_MechanicLayer_o* __this,
   Dino_BusSand_Core_Lift_o* lift, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__BuildLift_23c0bb0
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
               long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  int *piVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uStack_c8;
  long **pplStack_c0;
  long *plStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  
  if ((bRam0000000004f9c9d1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc080);
    FUN_02132f7c(PTR_DAT_04cbc0f8);
    FUN_02132f7c(PTR_DAT_04cbd100);
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04cbd108);
    FUN_02132f7c(PTR_DAT_04cbd110);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cbd088);
    FUN_02132f7c(PTR_DAT_04cbd118);
    FUN_02132f7c(PTR_DAT_04cbd120);
    bRam0000000004f9c9d1 = 1;
  }
  uStack_a8 = (double)(ulong)(uint)uStack_a8;
  plStack_b8 = (long *)0x0;
  dStack_b0 = 0.0;
  if (param_5 != 0) {
    if (*(long *)(param_5 + 0x28) != 0) {
      if ((bRam0000000004f9c9d2 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cbc080);
        FUN_02132f7c(PTR_DAT_04cbd100);
        FUN_02132f7c(PTR_DAT_04caa070);
        FUN_02132f7c(PTR_DAT_04cbd088);
        FUN_02132f7c(PTR_DAT_04cbd118);
        FUN_02132f7c(PTR_DAT_04cbd120);
        bRam0000000004f9c9d2 = 1;
      }
      dStack_b0 = 0.0;
      uStack_a8 = 0.0;
      plStack_b8 = (long *)0x0;
      if ((param_5 != 0) && (lVar13 = *(long *)(param_5 + 0x28), lVar13 != 0)) {
        uVar19 = *(undefined4 *)(lVar13 + 0x30);
        if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Core_BusGeometry__Heading_242bec8(uVar19,&uStack_a8,&dStack_b0,0);
        puVar3 = PTR_DAT_04cbd120;
        puVar1 = PTR_DAT_04caa070;
        if (*(long *)(param_4 + 0x28) != 0) {
          fVar20 = (float)*(undefined8 *)(lVar13 + 0x18);
          fVar16 = (float)Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                                    (*(undefined8 *)(lVar13 + 0x10),*(long *)(param_4 + 0x28),0);
          uVar22 = *(ulong *)(lVar13 + 0x18);
          dVar29 = uStack_a8;
          fVar17 = (float)Dino_BusSand_View_MechanicLayer__Dir_23c237c
                                    (*(undefined8 *)(lVar13 + 0x10),uVar22,uStack_a8,dStack_b0,
                                     param_4);
          fVar15 = SUB84(dVar29,0);
          fVar23 = (float)uVar22;
          if (cRam0000000004f9bcf8 == '\0') {
            FUN_02132f7c(PTR_DAT_04caa208);
            cRam0000000004f9bcf8 = '\x01';
          }
          puVar2 = PTR_DAT_04caa208;
          dVar31 = *(double *)(lVar13 + 0x20);
          dVar30 = *(double *)(lVar13 + 0x28);
          lVar9 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
          fVar32 = *(float *)(lVar9 + 0x18);
          fVar25 = *(float *)(lVar9 + 0x1c);
          fVar28 = *(float *)(lVar9 + 0x20);
          uVar5 = System_Int32__ToString_482d750(param_5 + 0x10,0);
          uVar5 = System_String__Concat_46c82e0(*(undefined8 *)puVar3,uVar5,0);
          lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
          UnityEngine_GameObject___ctor_43c20cc(lVar9,uVar5,0);
          if (lVar9 != 0) {
            lVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar9,0);
            uVar5 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
            if (lVar9 != 0) {
              fVar34 = (float)dVar31 + _UNK_00e207cc;
              fVar33 = (float)dVar30 + _UNK_00e207cc;
              UnityEngine_Transform__SetParent_43d1e34(lVar9,uVar5,0,0);
              UnityEngine_Transform__set_position_43d0f1c(fVar16,fVar20,param_3,lVar9,0);
              uVar6 = Dino_BusSand_View_MechanicLayer__ArtBasement_23c62bc
                                (fVar16,fVar20,param_3,fVar17,fVar23,(ulong)dVar29 & 0xffffffff,
                                 fVar34,fVar33,param_4,*(undefined4 *)(param_5 + 0x10),lVar9,
                                 &plStack_b8);
              puVar1 = PTR_DAT_04cbd088;
              plVar7 = plStack_b8;
              if ((uVar6 & 1) == 0) {
                if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar5 = Dino_BusSand_View_PropKit__get_LiftPlate_23ddb8c(0);
                if (cRam0000000004f9bcf8 == '\0') {
                  FUN_02132f7c(PTR_DAT_04caa208);
                  cRam0000000004f9bcf8 = '\x01';
                }
                lVar10 = *(long *)(*(long *)puVar2 + 0xb8);
                fVar21 = *(float *)(lVar10 + 0x18) * _UNK_00e20b14;
                fVar24 = *(float *)(lVar10 + 0x1c) * _UNK_00e20b14;
                fVar18 = *(float *)(lVar10 + 0x20) * _UNK_00e20b14;
                uVar6 = (ulong)(uint)fVar20;
                fVar27 = fVar23;
                fVar26 = fVar15;
                uVar19 = UnityEngine_Quaternion__LookRotation_43af354
                                   (fVar17,uVar22 & 0xffffffff,(ulong)dVar29 & 0xffffffff,0);
                plVar7 = (long *)Dino_BusSand_View_MechanicLayer__Prop_23c2534
                                           (fVar16 + fVar21,fVar20 + fVar24,param_3 + fVar18,uVar19,
                                            fVar27,fVar26,uVar6 & 0xffffffff,param_4,uVar5,lVar9,0);
                puVar3 = PTR_DAT_04cab4b0;
                uVar14 = 0;
                do {
                  fVar27 = -1.0;
                  if ((uVar14 & 1) != 0) {
                    fVar27 = 1.0;
                  }
                  fVar26 = -1.0;
                  if (1 < uVar14) {
                    fVar26 = 1.0;
                  }
                  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    thunk_FUN_0218fdac();
                  }
                  uVar5 = Dino_BusSand_View_PropKit__get_LiftPost_23ddca4(0);
                  fVar18 = *(float *)(param_4 + 0x50);
                  if (cRam0000000004f9b88b == '\0') {
                    FUN_02132f7c(puVar3);
                    cRam0000000004f9b88b = '\x01';
                  }
                  puVar11 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
                  Dino_BusSand_View_MechanicLayer__Prop_23c2534
                            (fVar16 + (fVar33 * (fVar15 * fVar25 - fVar23 * fVar28) * fVar26 +
                                      fVar34 * fVar17 * fVar27) * 0.5 * fVar18,
                             fVar20 + (fVar33 * (fVar17 * fVar28 - fVar15 * fVar32) * fVar26 +
                                      fVar34 * fVar23 * fVar27) * 0.5 * fVar18,
                             param_3 + (fVar33 * (fVar23 * fVar32 - fVar17 * fVar25) * fVar26 +
                                       fVar34 * fVar15 * fVar27) * 0.5 * fVar18,*puVar11,puVar11[1],
                             puVar11[2],puVar11[3],param_4,uVar5,lVar9,0);
                  uVar14 = uVar14 + 1;
                } while (uVar14 != 4);
              }
              uVar19 = *(undefined4 *)(param_5 + 0x10);
              Dino_BusSand_View_MechanicLayer__EdgePoint_23c6768
                        (*(undefined8 *)(lVar13 + 0x10),*(undefined8 *)(lVar13 + 0x18),
                         uStack_a8 * (double)fVar34 * 0.5,dStack_b0 * (double)fVar34 * 0.5,
                         dStack_b0 * (double)fVar33 * 0.5,-(uStack_a8 * (double)fVar33) * 0.5,
                         param_4,uVar19);
              plVar8 = (long *)Dino_BusSand_View_MechanicLayer__EdgeCounter_23c6f04
                                         (param_4,uVar19,lVar9);
              uVar5 = Dino_BusSand_View_MechanicLayer__LiftText_23c5938(param_4,param_5);
              puVar1 = PTR_DAT_04cbd118;
              if (plVar8 != (long *)0x0) {
                (**(code **)(*plVar8 + 0x518))(plVar8,uVar5,*(undefined8 *)(*plVar8 + 0x520));
                lVar13 = *(long *)(param_4 + 0x90);
                uVar19 = *(undefined4 *)(param_5 + 0x10);
                uStack_c8 = 0;
                pplStack_c0 = (long **)0x0;
                System_ValueTuple_object__object____ctor_30ee190
                          (&uStack_c8,plVar7,plVar8,*(undefined8 *)puVar1);
                if (lVar13 != 0) {
                  System_Collections_Generic_Dictionary_int__ValueTuple_object__object____set_Item_3406748
                            (lVar13,uVar19,uStack_c8,pplStack_c0,*(undefined8 *)PTR_DAT_04cbd100);
                  Dino_BusSand_View_MechanicLayer__PopIn_23c2a68
                            (_UNK_00e201f4,_UNK_00e20104,param_4,lVar9);
                  return;
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    if (*(long *)(param_4 + 0x28) != 0) {
      uVar22 = *(ulong *)(param_5 + 0x20);
      fVar15 = (float)Dino_BusSand_View_StageLayout__YardToWorld_23e8904
                                (*(undefined8 *)(param_5 + 0x18),uVar22,*(long *)(param_4 + 0x28),0)
      ;
      if (*(long *)(param_4 + 0x20) != 0) {
        lVar13 = *(long *)(*(long *)(param_4 + 0x20) + 0x58);
        uVar19 = Dino_BusSand_Core_Lift__get_Occupant_242e4a0(param_5,0);
        if (lVar13 != 0) {
          uVar6 = System_Collections_Generic_Dictionary_int__Int32Enum___TryGetValue_3431fdc
                            (lVar13,uVar19,(long)&uStack_a8 + 4,*(undefined8 *)PTR_DAT_04cbc0f8);
          if ((uVar6 & 1) != 0) {
            uVar19 = uStack_a8._4_4_;
            if (*(int *)(*(long *)PTR_DAT_04cbc080 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0(uVar19,0);
          }
          plVar7 = (long *)Dino_BusSand_Core_Lift__get_Queue_242e51c(param_5,0);
          if (plVar7 != (long *)0x0) {
            lVar13 = *plVar7;
            uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
            if (uVar6 != 0) {
              piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04cbd108) {
                  puVar4 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_024c0db4;
                }
                uVar6 = uVar6 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)PTR_DAT_04cbd108,0);
LAB_024c0db4:
            plVar7 = (long *)(*(code *)*puVar4)(plVar7,puVar4[1]);
            puVar2 = PTR_DAT_04cbd110;
            puVar3 = PTR_DAT_04cbc080;
            puVar1 = PTR_DAT_04ca9c08;
            pplStack_c0 = &plStack_b8;
            uStack_c8 = 0;
            do {
              plStack_b8 = plVar7;
              if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar13 = *plVar7;
              uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar6 != 0) {
                piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar1) {
                    puVar4 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_024c0e38;
                  }
                  uVar6 = uVar6 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)FUN_0216b7a4(plVar7,*(long *)puVar1,0);
LAB_024c0e38:
              uVar6 = (*(code *)*puVar4)(plVar7,puVar4[1]);
              plVar7 = plStack_b8;
              if ((uVar6 & 1) == 0) {
                if (plStack_b8 == (long *)0x0) goto LAB_024c0f48;
                lVar13 = *plStack_b8;
                uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
                if (uVar6 == 0) goto LAB_024c0f20;
                piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                goto LAB_024c0f08;
              }
              if (plStack_b8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar13 = *plStack_b8;
              uVar6 = (ulong)*(ushort *)(lVar13 + 0x12e);
              if (uVar6 != 0) {
                piVar12 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
                do {
                  if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
                    puVar4 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
                    goto LAB_024c0e9c;
                  }
                  uVar6 = uVar6 - 1;
                  piVar12 = piVar12 + 4;
                } while (uVar6 != 0);
              }
              puVar4 = (undefined8 *)FUN_0216b7a4(plStack_b8,*(long *)puVar2,0);
LAB_024c0e9c:
              uVar6 = (*(code *)*puVar4)(plVar7,puVar4[1]);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              Dino_BusSand_Core_BusGeometry__LengthCells_2429dc0(uVar6 >> 0x20,0);
              plVar7 = plStack_b8;
            } while( true );
          }
        }
      }
    }
  }
  goto LAB_024c134c;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar12 = piVar12 + 4;
    if (uVar6 == 0) break;
LAB_024c0f08:
    if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04ca9b30) {
      puVar4 = (undefined8 *)(lVar13 + (long)*piVar12 * 0x10 + 0x138);
      goto LAB_024c0f3c;
    }
  }
LAB_024c0f20:
  puVar4 = (undefined8 *)FUN_0216b7a4(plStack_b8,*(long *)PTR_DAT_04ca9b30,0);
LAB_024c0f3c:
  (*(code *)*puVar4)(plVar7,puVar4[1]);
LAB_024c0f48:
  dVar29 = *(double *)(param_5 + 0x58);
  uVar5 = System_Int32__ToString_482d750(param_5 + 0x10,0);
  uVar5 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cbd120,uVar5,0);
  lVar13 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
  UnityEngine_GameObject___ctor_43c20cc(lVar13,uVar5,0);
  if (lVar13 != 0) {
    lVar13 = UnityEngine_GameObject__get_transform_43c1048(lVar13,0);
    uVar5 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
    if (lVar13 != 0) {
      fVar16 = (float)(dVar29 + dVar29);
      UnityEngine_Transform__SetParent_43d1e34(lVar13,uVar5,0,0);
      UnityEngine_Transform__set_position_43d0f1c(fVar15,uVar22 & 0xffffffff,param_3,lVar13,0);
      uVar19 = *(undefined4 *)(param_5 + 0x10);
      if (cRam0000000004f9c25f == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9c25f = '\x01';
      }
      puVar1 = PTR_DAT_04caa208;
      lVar9 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      uVar6 = Dino_BusSand_View_MechanicLayer__ArtBasement_23c62bc
                        (fVar15,uVar22 & 0xffffffff,param_3,*(undefined4 *)(lVar9 + 0x3c),
                         *(undefined4 *)(lVar9 + 0x40),*(undefined4 *)(lVar9 + 0x44),fVar16,fVar16,
                         param_4,uVar19,lVar13,&dStack_b0);
      puVar3 = PTR_DAT_04cbd088;
      dVar29 = dStack_b0;
      if ((uVar6 & 1) == 0) {
        if (*(int *)(*(long *)PTR_DAT_04cbd088 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = Dino_BusSand_View_PropKit__get_LiftPlate_23ddb8c(0);
        if (cRam0000000004f9bcf8 == '\0') {
          FUN_02132f7c(PTR_DAT_04caa208);
          cRam0000000004f9bcf8 = '\x01';
        }
        lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
        fVar20 = *(float *)(lVar9 + 0x18) * _UNK_00e20b14;
        fVar23 = *(float *)(lVar9 + 0x1c) * _UNK_00e20b14;
        fVar17 = *(float *)(lVar9 + 0x20) * _UNK_00e20b14;
        if (cRam0000000004f9b88b == '\0') {
          FUN_02132f7c(PTR_DAT_04cab4b0);
          cRam0000000004f9b88b = '\x01';
        }
        puVar1 = PTR_DAT_04cab4b0;
        puVar11 = *(undefined4 **)(*(long *)PTR_DAT_04cab4b0 + 0xb8);
        dVar29 = (double)Dino_BusSand_View_MechanicLayer__Prop_23c2534
                                   (fVar15 + fVar20,(float)uVar22 + fVar23,param_3 + fVar17,*puVar11
                                    ,puVar11[1],puVar11[2],puVar11[3],param_4,uVar5,lVar13,0);
        uVar14 = 0;
        do {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = Dino_BusSand_View_PropKit__get_LiftPost_23ddca4(0);
          fVar20 = *(float *)(param_4 + 0x50);
          fVar17 = -fVar16;
          if ((uVar14 & 1) != 0) {
            fVar17 = fVar16;
          }
          fVar23 = -fVar16;
          if (1 < uVar14) {
            fVar23 = fVar16;
          }
          if (cRam0000000004f9b88b == '\0') {
            FUN_02132f7c(fVar16,puVar1);
            cRam0000000004f9b88b = '\x01';
          }
          puVar11 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
          Dino_BusSand_View_MechanicLayer__Prop_23c2534
                    (fVar15 + fVar17 * 0.5 * fVar20,(float)uVar22 + fVar16 * 0.0 * 0.5 * fVar20,
                     param_3 + fVar23 * 0.5 * fVar20,*puVar11,puVar11[1],puVar11[2],puVar11[3],
                     param_4,uVar5,lVar13,0);
          uVar14 = uVar14 + 1;
        } while (uVar14 != 4);
      }
      uVar19 = *(undefined4 *)(param_5 + 0x10);
      Dino_BusSand_View_MechanicLayer__EdgePoint_23c6768
                (*(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x20),
                 (double)fVar16 * 0.5,0,0,(double)fVar16 * 0.5,param_4,uVar19);
      plVar7 = (long *)Dino_BusSand_View_MechanicLayer__EdgeCounter_23c6f04(param_4,uVar19,lVar13);
      uVar5 = Dino_BusSand_View_MechanicLayer__LiftText_23c5938(param_4,param_5);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x518))(plVar7,uVar5,*(undefined8 *)(*plVar7 + 0x520));
        lVar9 = *(long *)(param_4 + 0x90);
        uVar19 = *(undefined4 *)(param_5 + 0x10);
        uStack_c8 = 0;
        pplStack_c0 = (long **)0x0;
        System_ValueTuple_object__object____ctor_30ee190
                  (&uStack_c8,dVar29,plVar7,*(undefined8 *)PTR_DAT_04cbd118);
        if (lVar9 != 0) {
          System_Collections_Generic_Dictionary_int__ValueTuple_object__object____set_Item_3406748
                    (lVar9,uVar19,uStack_c8,pplStack_c0,*(undefined8 *)PTR_DAT_04cbd100);
          Dino_BusSand_View_MechanicLayer__PopIn_23c2a68(_UNK_00e201f4,_UNK_00e20104,param_4,lVar13)
          ;
          return;
        }
      }
    }
  }
LAB_024c134c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

