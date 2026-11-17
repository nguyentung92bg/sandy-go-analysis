/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$SetProperties
void Dino_BusSand_App_Meta_TrackingPlan__SetProperties (System_Collections_Generic_Dictionary_string__object__o* props, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02376524) */
/* IL2CPP: Dino.BusSand.App.Meta.TrackingPlan$$SetProperties
   void Dino_BusSand_App_Meta_TrackingPlan__SetProperties
   (System_Collections_Generic_Dictionary_string__object__o* props, const MethodInfo* method); */

void Dino_BusSand_App_Meta_TrackingPlan__SetProperties_2275fa8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  puVar2 = PTR_DAT_04ca9b50;
  puVar1 = PTR_DAT_04ca9b08;
  if ((bRam0000000004f9c11d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04caa2f0);
    FUN_02132f7c(PTR_DAT_04caaf40);
    FUN_02132f7c(PTR_DAT_04cb4960);
    FUN_02132f7c(PTR_DAT_04ca9b50);
    FUN_02132f7c(PTR_DAT_04cb4968);
    FUN_02132f7c(PTR_DAT_04ca9b58);
    FUN_02132f7c(PTR_DAT_04ca9b08);
    FUN_02132f7c(PTR_DAT_04caa2f8);
    FUN_02132f7c(PTR_DAT_04caa300);
    FUN_02132f7c(PTR_DAT_04caa308);
    FUN_02132f7c(PTR_DAT_04caa310);
    FUN_02132f7c(PTR_DAT_04caa318);
    FUN_02132f7c(PTR_DAT_04cb2240);
    FUN_02132f7c(PTR_DAT_04cb4970);
    FUN_02132f7c(PTR_DAT_04cb4978);
    FUN_02132f7c(PTR_DAT_04cb4918);
    FUN_02132f7c(PTR_DAT_04cb4980);
    FUN_02132f7c(PTR_DAT_04cb4988);
    FUN_02132f7c(PTR_DAT_04cb4990);
    bRam0000000004f9c11d = 1;
  }
  uStack_70 = 0;
  uStack_94 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_90 = 0;
  lStack_78 = 0;
  lStack_80 = 0;
  lVar11 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_Dictionary_object__object____ctor_34b3628(lVar11,*(undefined8 *)puVar2)
  ;
  puVar8 = PTR_DAT_04cb4990;
  puVar7 = PTR_DAT_04cb4980;
  puVar6 = PTR_DAT_04cb4960;
  puVar5 = PTR_DAT_04cb4918;
  puVar4 = PTR_DAT_04cb2240;
  puVar2 = PTR_DAT_04caa300;
  puVar1 = PTR_DAT_04ca9b58;
  if (param_1 != 0) {
    System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
              (&uStack_d8,param_1,*(undefined8 *)PTR_DAT_04caa2f0);
    uStack_70 = uStack_b8;
    puStack_88 = puStack_d0;
    uStack_90 = uStack_d8;
    lStack_78 = lStack_c0;
    lStack_80 = lStack_c8;
    uStack_d8 = 0;
    puStack_d0 = &uStack_90;
LAB_02376178:
    do {
      uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                         (&uStack_90,*(undefined8 *)puVar2);
      lVar17 = lStack_78;
      lVar16 = lStack_80;
      puVar3 = PTR_DAT_04caa2f8;
      if ((uVar12 & 1) == 0) goto LAB_02376360;
      if (lStack_78 != 0) {
        lVar13 = *(long *)puVar4;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar13 = *(long *)puVar4;
        }
        lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x78);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar12 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue_34aebc0
                           (lVar13,lVar16,&uStack_94,*(undefined8 *)puVar6);
        if ((uVar12 & 1) == 0) {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar12 = System_String__StartsWith_46d117c(lVar16,*(undefined8 *)puVar7,0);
          if (((uVar12 & 1) == 0) ||
             (uVar12 = System_String__EndsWith_46d07b4(lVar16,*(undefined8 *)PTR_DAT_04cb4988,0),
             (uVar12 & 1) == 0)) {
            uVar15 = System_String__Concat_46c82e0(*(undefined8 *)puVar8,lVar16,0);
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            Dino_BusSand_App_Meta_TrackingPlan__Report_2275d64(uVar15);
            goto LAB_02376178;
          }
          uStack_94 = 1;
        }
        uVar9 = uStack_94;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar12 = Dino_BusSand_App_Meta_TrackingPlan__TypeOk_22766e0(lVar17,uVar9);
        if ((uVar12 & 1) != 0) {
          lVar13 = *(long *)puVar4;
          if (*(int *)(lVar13 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar13 = *(long *)puVar4;
          }
          lVar13 = *(long *)(*(long *)(lVar13 + 0xb8) + 0x18);
          if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (lVar13,lVar16,lVar17,*(undefined8 *)puVar1);
          lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
          if (*(long *)(lVar13 + 8) != 0) {
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar13 = *(long *)(*(long *)puVar4 + 0xb8);
            }
            if (*(long *)(lVar13 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar12 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                               (*(long *)(lVar13 + 0x88),lVar16,&uStack_a0,
                                *(undefined8 *)PTR_DAT_04caaf40);
            if (((uVar12 & 1) != 0) &&
               (uVar12 = System_Object__Equals_487cdb0(uStack_a0,lVar17,0), (uVar12 & 1) != 0))
            goto LAB_02376178;
          }
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (lVar11,lVar16,lVar17,*(undefined8 *)puVar1);
          goto LAB_02376178;
        }
        plVar14 = (long *)System_Object__GetType_4876970(lVar17,0);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar15 = (**(code **)(*plVar14 + 0x1b8))(plVar14,*(undefined8 *)(*plVar14 + 0x1c0));
        uVar15 = System_String__Concat_46d30e8
                           (*(undefined8 *)PTR_DAT_04cb4970,lVar16,*(undefined8 *)puVar5,uVar15,0);
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_TrackingPlan__Report_2275d64(uVar15);
      }
    } while( true );
  }
LAB_02376520:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
LAB_02376360:
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
            (&uStack_90,*(undefined8 *)PTR_DAT_04caa2f8);
  if (lVar11 != 0) {
    iVar10 = System_Collections_Generic_Dictionary_object__object___get_Count_34b405c
                       (lVar11,*(undefined8 *)PTR_DAT_04cb4968);
    if (iVar10 != 0) {
      lVar16 = *(long *)puVar4;
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar16 = *(long *)puVar4;
      }
      if (*(char *)(*(long *)(lVar16 + 0xb8) + 0x20) != '\0') {
        uVar15 = Dino_BusSand_App_MiniJson__Serialize_21556ec(lVar11,0);
        uVar15 = System_String__Concat_46c82e0(*(undefined8 *)PTR_DAT_04cb4978,uVar15,0);
        if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
          thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
        }
        UnityEngine_Debug__Log_4360fc8(uVar15,0);
        lVar16 = *(long *)puVar4;
      }
      if (*(int *)(lVar16 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar16 = *(long *)puVar4;
      }
      lVar17 = *(long *)(*(long *)(lVar16 + 0xb8) + 8);
      if (lVar17 != 0) {
        if (*(int *)(lVar16 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar17 = *(long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
        }
        (**(code **)(lVar17 + 0x18))
                  (*(undefined8 *)(lVar17 + 0x40),lVar11,*(undefined8 *)(lVar17 + 0x28));
        System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
                  (&uStack_d8,lVar11,*(undefined8 *)PTR_DAT_04caa2f0);
        uStack_70 = uStack_b8;
        puStack_88 = puStack_d0;
        uStack_90 = uStack_d8;
        lStack_78 = lStack_c0;
        lStack_80 = lStack_c8;
        uStack_d8 = 0;
        puStack_d0 = &uStack_90;
        while (uVar12 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                                  (&uStack_90,*(undefined8 *)puVar2), lVar16 = lStack_78,
              lVar11 = lStack_80, (uVar12 & 1) != 0) {
          lVar17 = *(long *)puVar4;
          if (*(int *)(lVar17 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar17 = *(long *)puVar4;
          }
          lVar17 = *(long *)(*(long *)(lVar17 + 0xb8) + 0x88);
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                    (lVar17,lVar11,lVar16,*(undefined8 *)puVar1);
        }
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                  (&uStack_90,*(undefined8 *)puVar3);
      }
    }
    return;
  }
  goto LAB_02376520;
}

