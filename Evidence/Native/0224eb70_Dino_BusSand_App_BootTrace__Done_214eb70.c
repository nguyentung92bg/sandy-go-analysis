/* IL2CPP: Dino.BusSand.App.BootTrace$$Done
void Dino_BusSand_App_BootTrace__Done (System_String_o* screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.BootTrace$$Done
   void Dino_BusSand_App_BootTrace__Done (System_String_o* screen, const MethodInfo* method); */

void Dino_BusSand_App_BootTrace__Done_214eb70(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  float fStack_cc;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_04cab240;
  if ((bRam0000000004f9b7b3 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab240);
    FUN_02132f7c(PTR_DAT_04caa370);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cab2d0);
    FUN_02132f7c(PTR_DAT_04cab2d8);
    FUN_02132f7c(PTR_DAT_04cab2e0);
    FUN_02132f7c(PTR_DAT_04cab2e8);
    FUN_02132f7c(PTR_DAT_04cab2f0);
    FUN_02132f7c(PTR_DAT_04cab2f8);
    FUN_02132f7c(PTR_DAT_04cab300);
    FUN_02132f7c(PTR_DAT_04cab308);
    FUN_02132f7c(PTR_DAT_04cab310);
    FUN_02132f7c(PTR_DAT_04cab318);
    FUN_02132f7c(PTR_DAT_04ca9b78);
    FUN_02132f7c(PTR_DAT_04cab320);
    FUN_02132f7c(PTR_DAT_04cab268);
    FUN_02132f7c(PTR_DAT_04cab328);
    FUN_02132f7c(PTR_DAT_04cab330);
    FUN_02132f7c(PTR_DAT_04cab338);
    FUN_02132f7c(PTR_DAT_04cab340);
    FUN_02132f7c(PTR_DAT_04cab348);
    FUN_02132f7c(PTR_DAT_04cab350);
    FUN_02132f7c(PTR_DAT_04cab2c0);
    FUN_02132f7c(PTR_DAT_04cab358);
    FUN_02132f7c(PTR_DAT_04cab288);
    bRam0000000004f9b7b3 = 1;
  }
  lVar7 = *(long *)puVar3;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_c8 = 0;
  fStack_cc = 0.0;
  uStack_68 = 0;
  uStack_70 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_80 = 0;
  puStack_b8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar3;
  }
  if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x24) != '\0') {
    return;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_BootTrace__Add_214e070(0xbf800000,param_1);
  uVar8 = *(undefined8 *)PTR_DAT_04ca9b78;
  *(undefined1 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x24) = 1;
  lVar7 = thunk_FUN_0216e89c(uVar8);
  System_Text_StringBuilder___ctor_46db860(lVar7,*(undefined8 *)PTR_DAT_04cab268,0);
  if ((lVar7 != 0) &&
     (lVar7 = System_Text_StringBuilder__Append_46dcdf4(lVar7,param_1,0), lVar7 != 0)) {
    lVar7 = System_Text_StringBuilder__Append_46dcdf4(lVar7,*(undefined8 *)PTR_DAT_04cab350,0);
    UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    uVar8 = Dino_BusSand_App_BootTrace__F_214eaf0();
    if ((lVar7 != 0) &&
       (lVar7 = System_Text_StringBuilder__Append_46dcdf4(lVar7,uVar8,0), lVar7 != 0)) {
      plVar9 = (long *)System_Text_StringBuilder__Append_46dcdf4
                                 (lVar7,*(undefined8 *)PTR_DAT_04cab338,0);
      puVar2 = PTR_DAT_04cab318;
      if (**(long **)(*(long *)puVar3 + 0xb8) != 0) {
        System_Collections_Generic_List_BootTrace_Entry___GetEnumerator_3b18b30
                  (&uStack_f8,**(long **)(*(long *)puVar3 + 0xb8),*(undefined8 *)PTR_DAT_04cab318);
        puVar5 = PTR_DAT_04cab2f0;
        puStack_78 = puStack_f0;
        uStack_80 = uStack_f8;
        uStack_68 = uStack_e0;
        uStack_70 = uStack_e8;
        uStack_f8 = 0;
        puStack_f0 = &uStack_80;
        while (uVar10 = System_Collections_Generic_List_Enumerator_BootTrace_Entry___MoveNext_360d9c0
                                  (&uStack_80,*(undefined8 *)puVar5), uVar11 = uStack_68,
              uVar8 = uStack_70, (uVar10 & 1) != 0) {
                    /* try { // try from 0224ee38 to 0234ef33 has its CatchHandler @ 0224ee38
                       catch() { ... } // from try @ 0224ee38 with catch @ 0224ee38
                       catch() { ... } // from try @ 0224ef40 with catch @ 0224ee38 */
          if (uStack_68._4_4_ < 0.0) {
            if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar7 = System_Text_StringBuilder__Append_46dd710(plVar9,0x20,0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar7 = System_Text_StringBuilder__Append_46dcdf4(lVar7,uVar8,0);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar7 = System_Text_StringBuilder__Append_46dd710(lVar7,0x20,0);
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar8 = Dino_BusSand_App_BootTrace__F_214eaf0(uVar11 & 0xffffffff);
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224(uVar8,uVar8);
            }
            System_Text_StringBuilder__Append_46dcdf4(lVar7,uVar8,0);
          }
        }
        System_Collections_Generic_List_Enumerator_BootTrace_Entry___Dispose_360d9bc
                  (&uStack_80,*(undefined8 *)PTR_DAT_04cab2e0);
        if (plVar9 != (long *)0x0) {
          System_Text_StringBuilder__Append_46dcdf4(plVar9,*(undefined8 *)PTR_DAT_04cab358,0);
          lVar7 = *(long *)puVar3;
          if (*(int *)(lVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar7 = *(long *)puVar3;
          }
          if (**(long **)(lVar7 + 0xb8) != 0) {
            System_Collections_Generic_List_BootTrace_Entry___GetEnumerator_3b18b30
                      (&uStack_f8,**(long **)(lVar7 + 0xb8),*(undefined8 *)puVar2);
            puVar4 = PTR_DAT_04cab288;
            puVar2 = PTR_DAT_04caa370;
            puStack_78 = puStack_f0;
            uStack_80 = uStack_f8;
            uStack_68 = uStack_e0;
            uStack_70 = uStack_e8;
                    /* try { // try from 0224ef34 to 0234ef3f has its CatchHandler @ 0224ef70 */
            uStack_f8 = 0;
            puStack_f0 = &uStack_80;
                    /* try { // try from 0224ef40 to 0234ef8b has its CatchHandler @ 0224ee38 */
            while (uVar11 = System_Collections_Generic_List_Enumerator_BootTrace_Entry___MoveNext_360d9c0
                                      (&uStack_80,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
              uStack_88 = uStack_68;
              uStack_90 = uStack_70;
              if (0.5 <= (float)(uStack_68 >> 0x20)) {
                    /* catch() { ... } // from try @ 0224ef34 with catch @ 0224ef70 */
                lVar7 = System_Text_StringBuilder__Append_46dd710(plVar9,0x20,0);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar7 = System_Text_StringBuilder__Append_46dcdf4(lVar7,uStack_90,0);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar7 = System_Text_StringBuilder__Append_46dd710(lVar7,0x20,0);
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar8 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
                uVar8 = System_Single__ToString_4842760
                                  ((long)&uStack_88 + 4,*(undefined8 *)puVar4,uVar8,0);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224(uVar8,uVar8);
                }
                System_Text_StringBuilder__Append_46dcdf4(lVar7,uVar8,0);
              }
            }
            System_Collections_Generic_List_Enumerator_BootTrace_Entry___Dispose_360d9bc
                      (&uStack_80,*(undefined8 *)PTR_DAT_04cab2e0);
            lVar7 = *(long *)puVar3;
            if (*(int *)(lVar7 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar7 = *(long *)puVar3;
            }
            lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
            if (lVar7 != 0) {
              System_Collections_Generic_Dictionary_object__ValueTuple_int__float____GetEnumerator_347e7a4
                        (&uStack_f8,lVar7,*(undefined8 *)PTR_DAT_04cab2d0);
              puVar6 = PTR_DAT_04cab348;
              puVar5 = PTR_DAT_04cab2e8;
                    /* try { // try from 0224f03c to 0234f0af has its CatchHandler @ 0224f03c
                       catch() { ... } // from try @ 0224f03c with catch @ 0224f03c
                       catch() { ... } // from try @ 0224f0bc with catch @ 0224f03c */
              puStack_b8 = puStack_f0;
              uStack_c0 = uStack_f8;
              uStack_a8 = uStack_e0;
              uStack_b0 = uStack_e8;
              uStack_a0 = uStack_d8;
              uStack_f8 = 0;
              puStack_f0 = &uStack_c0;
              while (uVar10 = System_Collections_Generic_Dictionary_Enumerator_object__ValueTuple_int__float____MoveNext_363d850
                                        (&uStack_c0,*(undefined8 *)puVar5), uVar11 = uStack_a8,
                    uVar8 = uStack_b0, (uVar10 & 1) != 0) {
                lVar7 = System_Text_StringBuilder__Append_46dd710(plVar9,0x20,0);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar7 = System_Text_StringBuilder__Append_46dcdf4(lVar7,uVar8,0);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar7 = System_Text_StringBuilder__Append_46dcdf4(lVar7,*(undefined8 *)puVar6,0);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                lVar7 = System_Text_StringBuilder__Append_46dd7b8(lVar7,uVar11 & 0xffffffff,0);
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
                    /* try { // try from 0224f0b0 to 0234f0bb has its CatchHandler @ 0224f0ec */
                lVar7 = System_Text_StringBuilder__Append_46dd710(lVar7,0x20,0);
                    /* try { // try from 0224f0bc to 0234f107 has its CatchHandler @ 0224f03c */
                uStack_c8 = uVar11;
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar8 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
                uVar8 = System_Single__ToString_4842760
                                  ((ulong)&uStack_c8 | 4,*(undefined8 *)puVar4,uVar8,0);
                    /* catch() { ... } // from try @ 0224f0b0 with catch @ 0224f0ec */
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_02133224(uVar8,uVar8);
                }
                System_Text_StringBuilder__Append_46dcdf4(lVar7,uVar8,0);
              }
              System_Collections_Generic_Dictionary_Enumerator_object__ValueTuple_int__float____Dispose_363d970
                        (&uStack_c0,*(undefined8 *)PTR_DAT_04cab2d8);
              lVar7 = System_Text_StringBuilder__Append_46dcdf4
                                (plVar9,*(undefined8 *)PTR_DAT_04cab320,0);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)puVar3);
              }
              if ((((lVar7 != 0) &&
                   (lVar7 = System_Text_StringBuilder__Append_46dd7b8
                                      (lVar7,*(undefined4 *)
                                              (*(long *)(*(long *)puVar3 + 0xb8) + 0x1c),0),
                   lVar7 != 0)) &&
                  (lVar7 = System_Text_StringBuilder__Append_46dcdf4
                                     (lVar7,*(undefined8 *)PTR_DAT_04cab340,0), lVar7 != 0)) &&
                 (lVar7 = System_Text_StringBuilder__Append_46dd7b8
                                    (lVar7,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x20)
                                     ,0), lVar7 != 0)) {
                lVar7 = System_Text_StringBuilder__Append_46dcdf4
                                  (lVar7,*(undefined8 *)PTR_DAT_04cab328,0);
                fStack_cc = *(float *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18) * 1000.0;
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                uVar8 = System_Globalization_CultureInfo__get_InvariantCulture_47d1930(0);
                uVar8 = System_Single__ToString_4842760(&fStack_cc,*(undefined8 *)puVar4,uVar8,0);
                if (((lVar7 != 0) &&
                    (lVar7 = System_Text_StringBuilder__Append_46dcdf4(lVar7,uVar8,0), lVar7 != 0))
                   && (lVar7 = System_Text_StringBuilder__Append_46dcdf4
                                         (lVar7,*(undefined8 *)PTR_DAT_04cab2c0,0), lVar7 != 0)) {
                  lVar12 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
                  lVar1 = *(long *)PTR_DAT_04cab330;
                  if (lVar12 != 0) {
                    lVar1 = lVar12;
                  }
                  lVar7 = System_Text_StringBuilder__Append_46dcdf4(lVar7,lVar1,0);
                  if (lVar7 != 0) {
                    System_Text_StringBuilder__Append_46dd710(lVar7,0x29,0);
                    uVar8 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
                    if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9af8);
                    }
                    UnityEngine_Debug__Log_4360fc8(uVar8,0);
                    return;
                  }
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

