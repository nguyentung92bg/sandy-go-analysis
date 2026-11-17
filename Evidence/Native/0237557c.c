/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$Validate
System_String_o* Dino_BusSand_App_Meta_TrackingPlan__Validate (System_String_o* name, System_Collections_Generic_Dictionary_string__object__o* p, System_String_o** valueNote, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$Validate
   System_String_o* Dino_BusSand_App_Meta_TrackingPlan__Validate (System_String_o* name,
   System_Collections_Generic_Dictionary_string__object__o* p, System_String_o** valueNote, const
   MethodInfo* method); */

undefined8
Dino_BusSand_App_Meta_TrackingPlan__Validate_227557c(undefined8 param_1,long param_2,long *param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  double dVar19;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  int iStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_70;
  long lStack_68;
  
  puVar3 = PTR_DAT_04cb2240;
  if ((bRam0000000004f9c120 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb48b0);
    FUN_02132f7c(PTR_DAT_04cb1930);
    FUN_02132f7c(PTR_DAT_04ca9b88);
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04cb48b8);
    FUN_02132f7c(PTR_DAT_04caaf40);
    FUN_02132f7c(PTR_DAT_04cac060);
    FUN_02132f7c(PTR_DAT_04cb48c0);
    FUN_02132f7c(PTR_DAT_04cb48c8);
    FUN_02132f7c(PTR_DAT_04cb48d0);
    FUN_02132f7c(PTR_DAT_04cab538);
    FUN_02132f7c(PTR_DAT_04cb48d8);
    FUN_02132f7c(PTR_DAT_04cb48e0);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cb48e8);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb48f0);
    FUN_02132f7c(PTR_DAT_04cb48f8);
    FUN_02132f7c(PTR_DAT_04cb4900);
    FUN_02132f7c(PTR_DAT_04cb4908);
    FUN_02132f7c(PTR_DAT_04cb4910);
    FUN_02132f7c(PTR_DAT_04cb4918);
    FUN_02132f7c(PTR_DAT_04cb4920);
    FUN_02132f7c(PTR_DAT_04cb4928);
    FUN_02132f7c(PTR_DAT_04cb4930);
    FUN_02132f7c(PTR_DAT_04cac620);
    FUN_02132f7c(PTR_DAT_04cb4938);
    FUN_02132f7c(PTR_DAT_04cb4940);
    FUN_02132f7c(PTR_DAT_04cb4948);
    FUN_02132f7c(PTR_DAT_04cb4950);
    FUN_02132f7c(PTR_DAT_04cabc80);
    FUN_02132f7c(PTR_DAT_04cb4958);
    bRam0000000004f9c120 = 1;
  }
  lStack_70 = 0;
  lStack_68 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  *param_3 = 0;
  thunk_FUN_02134474(param_3,0);
  lVar9 = *(long *)puVar3;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar9 = *(long *)puVar3;
  }
  puVar2 = PTR_DAT_04cb48b8;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x68);
  if (lVar9 != 0) {
    uVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                       (lVar9,param_1,&lStack_68,*(undefined8 *)PTR_DAT_04cb48b8);
    if ((uVar10 & 1) == 0) {
      lVar9 = *(long *)puVar3;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar9 = *(long *)puVar3;
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x70);
      if (lVar9 == 0) goto LAB_02375ce4;
      uVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                         (lVar9,param_1,&lStack_68,*(undefined8 *)puVar2);
      puVar16 = (undefined8 *)PTR_DAT_04cb4950;
      if ((uVar10 & 1) == 0) goto LAB_02375b10;
    }
    lVar9 = lStack_68;
    puVar2 = PTR_DAT_04caaf40;
    puVar16 = (undefined8 *)PTR_DAT_04cb4930;
    if (param_2 == 0) {
LAB_02375b10:
      return *puVar16;
    }
    if (lStack_68 != 0) {
      if (0 < (int)*(ulong *)(lStack_68 + 0x18)) {
        uVar10 = 0;
        uVar14 = *(ulong *)(lStack_68 + 0x18) & 0xffffffff;
        plVar13 = (long *)(lStack_68 + 0x30);
LAB_023757f8:
        if (uVar10 < uVar14) {
          lVar17 = plVar13[-2];
          iVar8 = (int)plVar13[-1];
          bVar1 = *(byte *)((long)plVar13 + -4);
          lVar18 = *plVar13;
          uVar14 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                             (param_2,lVar17,&lStack_70,*(undefined8 *)puVar2);
          lVar12 = lStack_70;
          if ((uVar14 & 1) == 0) {
            if ((bVar1 & 1) != 0) {
              lVar9 = *(long *)PTR_DAT_04cb4900;
              goto LAB_02375ca8;
            }
          }
          else {
            plVar15 = (long *)PTR_DAT_04cb4940;
            if (lStack_70 == 0) {
LAB_02375ca0:
              lVar9 = lVar17;
              lVar17 = *plVar15;
LAB_02375ca8:
              uVar11 = System_String__Concat_46c82e0(lVar9,lVar17,0);
              return uVar11;
            }
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar14 = Dino_BusSand_App_Meta_TrackingPlan__TypeOk_22766e0(lVar12,iVar8);
            lVar12 = lStack_70;
            if ((uVar14 & 1) == 0) {
              lVar9 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,5);
              if (lVar9 == 0) goto LAB_02375ce4;
              if (*(int *)(lVar9 + 0x18) != 0) {
                *(long *)(lVar9 + 0x20) = lVar17;
                thunk_FUN_02134474((long *)(lVar9 + 0x20),lVar17);
                if ((*(uint *)(lVar9 + 0x18) & 0xfffffffe) == 0) goto LAB_02375cd8;
                *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)PTR_DAT_04cb4918;
                thunk_FUN_02134474();
                if ((lStack_70 == 0) ||
                   (plVar13 = (long *)System_Object__GetType_4876970(lStack_70,0),
                   plVar13 == (long *)0x0)) goto LAB_02375ce4;
                uVar11 = (**(code **)(*plVar13 + 0x1b8))(plVar13,*(undefined8 *)(*plVar13 + 0x1c0));
                if (2 < *(uint *)(lVar9 + 0x18)) {
                  *(undefined8 *)(lVar9 + 0x30) = uVar11;
                  thunk_FUN_02134474((undefined8 *)(lVar9 + 0x30),uVar11);
                  if ((*(uint *)(lVar9 + 0x18) & 0xfffffffc) != 0) {
                    *(undefined8 *)(lVar9 + 0x38) = *(undefined8 *)PTR_DAT_04cb4920;
                    thunk_FUN_02134474((undefined8 *)(lVar9 + 0x38));
                    uStack_a8 = *(undefined8 *)PTR_DAT_04cb48e8;
                    puStack_a0 = (undefined8 *)0xffffffffffffffff;
                    iStack_98 = iVar8;
                    uVar11 = System_Enum__ToString_4863070(&uStack_a8,0);
                    if (4 < *(uint *)(lVar9 + 0x18)) {
                      *(undefined8 *)(lVar9 + 0x40) = uVar11;
                      thunk_FUN_02134474();
                      uVar11 = System_String__Concat_46d31f0(lVar9,0);
                      return uVar11;
                    }
                  }
                }
              }
              goto LAB_02375cd8;
            }
            if (iVar8 != 0) {
              if (*(int *)(*(long *)PTR_DAT_04ca9b88 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              dVar19 = (double)System_Convert__ToDouble_47c2414(lVar12,0);
              plVar15 = (long *)PTR_DAT_04cb4910;
              if (dVar19 < 0.0) goto LAB_02375ca0;
            }
            uVar14 = System_String__op_Equality_46d1108(lVar17,*(undefined8 *)PTR_DAT_04cabc80,0);
            if (((uVar14 & 1) != 0) ||
               (uVar14 = System_String__op_Equality_46d1108
                                   (lVar17,*(undefined8 *)PTR_DAT_04cac620,0), (uVar14 & 1) != 0)) {
              lVar12 = lStack_70;
              if (*(int *)(*(long *)PTR_DAT_04ca9b88 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              dVar19 = (double)System_Convert__ToDouble_47c2414(lVar12,0);
              plVar15 = (long *)PTR_DAT_04cb4938;
              if (100.0 < dVar19) goto LAB_02375ca0;
            }
            lVar12 = lStack_70;
            if ((lVar18 != 0) && (*param_3 == 0)) {
              if (*(int *)(*(long *)PTR_DAT_04caa370 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar11 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
              if (*(int *)(*(long *)PTR_DAT_04ca9b88 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9b88);
              }
              uVar11 = System_Convert__ToString_47c2eec(lVar12,uVar11,0);
              iVar8 = System_Array__IndexOf_object__2906334
                                (lVar18,uVar11,*(undefined8 *)PTR_DAT_04cb1930);
              if (iVar8 < 0) {
                lVar12 = System_String__Concat_46d30e8
                                   (lVar17,*(undefined8 *)PTR_DAT_04cb4908,uVar11,
                                    *(undefined8 *)PTR_DAT_04cb4948,0);
                *param_3 = lVar12;
                thunk_FUN_02134474(param_3,lVar12);
              }
            }
          }
          uVar14 = (ulong)*(uint *)(lVar9 + 0x18);
          uVar10 = uVar10 + 1;
          plVar13 = plVar13 + 3;
          if ((long)(int)*(uint *)(lVar9 + 0x18) <= (long)uVar10) goto LAB_023759c8;
          goto LAB_023757f8;
        }
LAB_02375cd8:
                    /* WARNING: Subroutine does not return */
        FUN_0213322c();
      }
LAB_023759c8:
      lVar9 = System_Collections_Generic_Dictionary_object__object___get_Keys_34b406c
                        (param_2,*(undefined8 *)PTR_DAT_04cac060);
      if (lVar9 != 0) {
        System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator_38f9e8c
                  (&uStack_a8,lVar9,*(undefined8 *)PTR_DAT_04cb48d8);
        puVar7 = PTR_DAT_04cb48f8;
        puVar6 = PTR_DAT_04cb48f0;
        puVar5 = PTR_DAT_04cb48c8;
        puVar4 = PTR_DAT_04cb48b0;
        puVar2 = PTR_DAT_04cab538;
        uStack_80 = CONCAT44(uStack_94,iStack_98);
        uStack_88 = puStack_a0;
        uStack_90 = uStack_a8;
        puStack_a0 = &uStack_90;
        uStack_a8 = 0;
        while( true ) {
          uVar10 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext_3646184
                             (&uStack_90,*(undefined8 *)puVar5);
          if ((uVar10 & 1) == 0) {
            uVar11 = 0;
            goto LAB_02375b38;
          }
          lVar9 = thunk_FUN_0216e89c(*(undefined8 *)puVar7);
          Dino_BusSand_App_Meta_TrackingPlan___c__DisplayClass36_0___ctor_22921f0(lVar9,0);
          if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          puVar16 = (undefined8 *)(lVar9 + 0x10);
          *puVar16 = uStack_80;
          thunk_FUN_02134474(puVar16);
          lVar12 = *(long *)puVar3;
          if (*(int *)(lVar12 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar12 = *(long *)puVar3;
          }
          lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x80);
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar14 = System_Collections_Generic_HashSet_object___Contains_37e5a5c
                             (lVar12,*puVar16,*(undefined8 *)puVar2);
          lVar12 = lStack_68;
          if ((uVar14 & 1) != 0) break;
          uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb48e0);
          System_Predicate_TrackingPlan_Field____ctor_2c53a10(uVar11,lVar9,*(undefined8 *)puVar6,0);
          iVar8 = System_Array__FindIndex_TrackingPlan_Field__290592c
                            (lVar12,uVar11,*(undefined8 *)puVar4);
          if (iVar8 < 0) {
            uVar11 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb4958,*puVar16,0);
LAB_02375b38:
            if ((uVar10 & 1) == 0) {
              uVar11 = 0;
            }
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose_3646180
                      (&uStack_90,*(undefined8 *)PTR_DAT_04cb48c0);
            return uVar11;
          }
        }
        uVar11 = System_String__Concat_46c82e0(*puVar16,*(undefined8 *)PTR_DAT_04cb4928,0);
        goto LAB_02375b38;
      }
    }
  }
LAB_02375ce4:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

