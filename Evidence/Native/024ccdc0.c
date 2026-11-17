/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnLaneSpent
void Dino_BusSand_View_MechanicLayer__OnLaneSpent (Dino_BusSand_View_MechanicLayer_o* __this, int32_t laneId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024cd28c) */
/* WARNING: Removing unreachable block (ram,0x024cd370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.MechanicLayer$$OnLaneSpent
   void Dino_BusSand_View_MechanicLayer__OnLaneSpent (Dino_BusSand_View_MechanicLayer_o* __this,
   int32_t laneId, const MethodInfo* method); */

void Dino_BusSand_View_MechanicLayer__OnLaneSpent_23ccdc0(long param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long *plVar17;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long **pplStack_a0;
  long **pplStack_98;
  long *plStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_58;
  
  puVar4 = PTR_DAT_04cbd488;
  if ((bRam0000000004f9c9f2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac208);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cbd478);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04ca9b30);
    FUN_02132f7c(PTR_DAT_04ca9c08);
    FUN_02132f7c(PTR_DAT_04cbd490);
    FUN_02132f7c(PTR_DAT_04cbd498);
    FUN_02132f7c(PTR_DAT_04cbd4a0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad740);
    FUN_02132f7c(PTR_DAT_04cbd4a8);
    FUN_02132f7c(PTR_DAT_04cbd4b0);
    FUN_02132f7c(PTR_DAT_04cbd488);
    FUN_02132f7c(PTR_DAT_04cbd4b8);
    bRam0000000004f9c9f2 = 1;
  }
  lStack_58 = 0;
  plStack_90 = (long *)0x0;
  plStack_88 = (long *)0x0;
  lVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  Dino_BusSand_View_MechanicLayer___c__DisplayClass125_0___ctor_23d4c8c(lVar8,0);
  if (*(long *)(param_1 + 0x88) != 0) {
    uVar9 = System_Collections_Generic_Dictionary_int__object___TryGetValue_3438e08
                      (*(long *)(param_1 + 0x88),param_2,&lStack_58,*(undefined8 *)PTR_DAT_04cbd478)
    ;
    puVar4 = PTR_DAT_04cad568;
    if ((uVar9 & 1) == 0) {
      return;
    }
    if (lStack_58 != 0) {
      if (*(char *)(lStack_58 + 0x6c) != '\0') {
        return;
      }
      *(undefined1 *)(lStack_58 + 0x6c) = 1;
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar10 = *(long *)puVar4;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar4;
      }
      if (**(long **)(lVar10 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Mechanic_2384944(0,0,**(long **)(lVar10 + 0xb8),0xd,0);
      }
      if ((lStack_58 != 0) && (lVar8 != 0)) {
        puVar15 = (undefined8 *)(lVar8 + 0x18);
        *puVar15 = *(undefined8 *)(lStack_58 + 0x40);
        thunk_FUN_02134474(puVar15);
        uVar16 = *puVar15;
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar16,0,0);
        if ((uVar9 & 1) != 0) {
          return;
        }
        lVar10 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbd4a0);
        System_Collections_Generic_List_ValueTuple_object__Vector3_____ctor_39be248
                  (lVar10,*(undefined8 *)PTR_DAT_04cbd498);
        plVar17 = (long *)(lVar8 + 0x10);
        *plVar17 = lVar10;
        thunk_FUN_02134474(plVar17,lVar10);
        if (*(long *)(lVar8 + 0x18) != 0) {
          plVar11 = (long *)UnityEngine_Transform__GetEnumerator_43d5014(*(long *)(lVar8 + 0x18),0);
          puVar7 = PTR_DAT_04cbd4b8;
          puVar6 = PTR_DAT_04cbd490;
          puVar5 = PTR_DAT_04cad740;
          puVar4 = PTR_DAT_04ca9c08;
          pplStack_a0 = &plStack_88;
          uStack_a8 = 0;
          pplStack_98 = &plStack_90;
          do {
            plStack_88 = plVar11;
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar12 = *plVar11;
            lVar10 = *(long *)puVar4;
            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar9 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar15 = (undefined8 *)(lVar12 + (long)*piVar14 * 0x10 + 0x138);
                  goto LAB_024cd09c;
                }
                uVar9 = uVar9 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar9 != 0);
            }
            puVar15 = (undefined8 *)FUN_0216b7a4(plVar11,lVar10,0);
LAB_024cd09c:
            uVar9 = (*(code *)*puVar15)(plVar11,puVar15[1]);
            plVar11 = plStack_88;
            puVar3 = PTR_DAT_04ca9b30;
            if ((uVar9 & 1) == 0) {
              plVar17 = (long *)thunk_FUN_0216e7a0(plStack_88,*(undefined8 *)PTR_DAT_04ca9b30);
              plStack_90 = plVar17;
              if (plVar17 == (long *)0x0) goto LAB_024cd280;
              lVar10 = *plVar17;
              uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
              if (uVar9 == 0) goto LAB_024cd258;
              piVar14 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
              goto LAB_024cd240;
            }
            if (plStack_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar12 = *plStack_88;
            lVar10 = *(long *)puVar4;
            uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
            if (uVar9 != 0) {
              piVar14 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
              do {
                if (*(long *)(piVar14 + -2) == lVar10) {
                  puVar15 = (undefined8 *)(lVar12 + (long)(*piVar14 + 1) * 0x10 + 0x138);
                  goto LAB_024cd104;
                }
                uVar9 = uVar9 - 1;
                piVar14 = piVar14 + 4;
              } while (uVar9 != 0);
            }
            puVar15 = (undefined8 *)FUN_0216b7a4(plStack_88,lVar10,1);
LAB_024cd104:
            plVar11 = (long *)(*(code *)*puVar15)(plVar11,puVar15[1]);
            if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
            if ((*(byte *)(*plVar11 + 0x130) < bVar1) ||
               (*(long *)(*(long *)(*plVar11 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
              FUN_021335a4(plVar11);
            }
            lVar10 = *plVar17;
            UnityEngine_Transform__get_localScale_43d1b0c(plVar11,0);
            uStack_c0 = 0;
            uStack_b8 = 0;
            uStack_b0 = 0;
            System_ValueTuple_object__Vector3____ctor_30eee4c
                      (&uStack_c0,plVar11,*(undefined8 *)puVar7);
            if (lVar10 == 0) {
LAB_024cd360:
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar12 = *(long *)(lVar10 + 0x10);
            lVar13 = *(long *)puVar6;
            *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_024cd360;
            uVar2 = *(uint *)(lVar10 + 0x18);
            if (uVar2 < *(uint *)(lVar12 + 0x18)) {
              lVar12 = lVar12 + (long)(int)uVar2 * 0x18;
              *(uint *)(lVar10 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar12 + 0x30) = uStack_b0;
              *(undefined8 *)(lVar12 + 0x28) = uStack_b8;
              *(undefined8 *)(lVar12 + 0x20) = uStack_c0;
              thunk_FUN_02134474(lVar12 + 0x20,0);
              plVar11 = plStack_88;
            }
            else {
              uStack_78 = uStack_b8;
              uStack_80 = uStack_c0;
              uStack_70 = uStack_b0;
              System_Collections_Generic_List_ValueTuple_object__Vector3____AddWithResize_39beb6c
                        (lVar10,&uStack_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
              plVar11 = plStack_88;
            }
          } while( true );
        }
      }
    }
  }
  goto LAB_024cd36c;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar14 = piVar14 + 4;
    if (uVar9 == 0) break;
LAB_024cd240:
    if (*(long *)(piVar14 + -2) == *(long *)puVar3) {
      puVar15 = (undefined8 *)(lVar10 + (long)*piVar14 * 0x10 + 0x138);
      goto LAB_024cd274;
    }
  }
LAB_024cd258:
  puVar15 = (undefined8 *)FUN_0216b7a4(plVar17,*(long *)puVar3,0);
LAB_024cd274:
  (*(code *)*puVar15)(plVar17,puVar15[1]);
LAB_024cd280:
  uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac208);
  System_Action_float____ctor_35f1448(uVar16,lVar8,*(undefined8 *)PTR_DAT_04cbd4a8,0);
  lVar10 = Dino_BusSand_Tween__Value_238bbfc(0x3f000000,uVar16,0);
  if (lVar10 != 0) {
    lVar10 = Dino_BusSand_Tween__SetDelay_238bb40(_UNK_00e20590,lVar10,0);
    uVar16 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa458);
    System_Action___ctor_47b5ed0(uVar16,lVar8,*(undefined8 *)PTR_DAT_04cbd4b0,0);
    if ((lVar10 != 0) && (lVar8 = Dino_BusSand_Tween__OnDone_238bb74(lVar10,uVar16,0), lVar8 != 0))
    {
      Dino_BusSand_Tween__SetOwner_238bb58(lVar8,param_1,0);
      return;
    }
  }
LAB_024cd36c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

