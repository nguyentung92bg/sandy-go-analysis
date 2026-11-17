/* IL2CPP: Dino.BusSand.App.Analytics$$L
System_Object_array* Dino_BusSand_App_Analytics__L (System_Object_array* extra, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Analytics$$L
   System_Object_array* Dino_BusSand_App_Analytics__L (System_Object_array* extra, const MethodInfo*
   method); */

void Dino_BusSand_App_Analytics__L_216fff0(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar4 = PTR_DAT_04ca9b98;
  puVar3 = PTR_DAT_04ca9b90;
  if ((bRam0000000004f9b8ce & 1) == 0) {
                    /* try { // try from 02270024 to 02370057 has its CatchHandler @ 02270024
                       catch(type#1 @ 00000000) { ... } // from try @ 02270024 with catch @ 02270024
                       catch(type#1 @ 00000000) { ... } // from try @ 022701f8 with catch @ 02270024
                        */
    FUN_02132f7c(PTR_DAT_04cac5c0);
    FUN_02132f7c(PTR_DAT_04cacbf0);
    FUN_02132f7c(PTR_DAT_04ca9ba0);
    FUN_02132f7c(PTR_DAT_04cacbf8);
                    /* try { // try from 02270058 to 02370067 has its CatchHandler @ 022701ec */
    FUN_02132f7c(PTR_DAT_04ca9b98);
    FUN_02132f7c(PTR_DAT_04ca9b90);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cacb50);
                    /* try { // try from 02270088 to 0237008f has its CatchHandler @ 022701e8 */
    FUN_02132f7c(PTR_DAT_04cacc00);
    FUN_02132f7c(PTR_DAT_04cacc08);
    FUN_02132f7c(PTR_DAT_04cacc10);
    FUN_02132f7c(PTR_DAT_04cacc18);
    FUN_02132f7c(PTR_DAT_04cabc00);
    FUN_02132f7c(PTR_DAT_04cacc20);
    FUN_02132f7c(PTR_DAT_04cacc28);
    FUN_02132f7c(PTR_DAT_04cacba0);
    bRam0000000004f9b8ce = 1;
  }
  lVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
                    /* try { // try from 022700f8 to 023700ff has its CatchHandler @ 022701d0 */
  System_Collections_Generic_List_object____ctor_3a8138c(lVar6,*(undefined8 *)puVar4);
  puVar3 = PTR_DAT_04ca9ba0;
  if (lVar6 != 0) {
                    /* try { // try from 02270114 to 0237013b has its CatchHandler @ 022701d8 */
    lVar8 = *(long *)(lVar6 + 0x10);
    uVar7 = *(undefined8 *)PTR_DAT_04cabc00;
    lVar9 = *(long *)PTR_DAT_04ca9ba0;
    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
    puVar4 = PTR_DAT_04cac5c0;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar6 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    /* try { // try from 02270150 to 0237015b has its CatchHandler @ 022701d4 */
        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
        thunk_FUN_02134474();
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      lVar8 = *(long *)puVar4;
                    /* try { // try from 0227017c to 02370197 has its CatchHandler @ 022701e0 */
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar4;
      }
      puVar2 = PTR_DAT_04ca9ac8;
      uStack_34 = *(undefined4 *)(*(long *)(lVar8 + 0xb8) + 0x30);
      uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&uStack_34);
                    /* try { // try from 022701a8 to 023701ab has its CatchHandler @ 022701dc */
                    /* try { // try from 022701ac to 023701b3 has its CatchHandler @ 022701e4 */
      lVar8 = *(long *)(lVar6 + 0x10);
      lVar9 = *(long *)puVar3;
      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
      puVar5 = PTR_DAT_04cacc28;
      if (lVar8 != 0) {
        uVar1 = *(uint *)(lVar6 + 0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022700f8 with catch @ 022701d0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270150 with catch @ 022701d4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270114 with catch @ 022701d8
                        */
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022701a8 with catch @ 022701dc
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227017c with catch @ 022701e0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022701ac with catch @ 022701e4
                        */
          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270088 with catch @ 022701e8
                        */
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270058 with catch @ 022701ec
                        */
          thunk_FUN_02134474();
                    /* try { // try from 022701f0 to 023701f7 has its CatchHandler @ 02270200 */
        }
        else {
                    /* try { // try from 022701f8 to 02370203 has its CatchHandler @ 02270024 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022701f0 with catch @ 02270200
                        */
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        lVar8 = *(long *)(lVar6 + 0x10);
        uVar7 = *(undefined8 *)puVar5;
        lVar9 = *(long *)puVar3;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
            thunk_FUN_02134474();
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar6,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
          }
          uVar7 = System_Int32__ToString_482d750(*(long *)(*(long *)puVar4 + 0xb8) + 0x34,0);
          lVar8 = *(long *)(lVar6 + 0x10);
          lVar9 = *(long *)puVar3;
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          puVar5 = PTR_DAT_04cacc20;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
              thunk_FUN_02134474();
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar6,uVar7,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            lVar8 = *(long *)(lVar6 + 0x10);
            uVar7 = *(undefined8 *)puVar5;
            lVar9 = *(long *)puVar3;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar8 != 0) {
                    /* try { // try from 022702f0 to 02370323 has its CatchHandler @ 022702f0
                       catch(type#1 @ 00000000) { ... } // from try @ 022702f0 with catch @ 022702f0
                       catch(type#1 @ 00000000) { ... } // from try @ 022703e8 with catch @ 022702f0
                        */
              uVar1 = *(uint *)(lVar6 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                thunk_FUN_02134474();
              }
              else {
                    /* try { // try from 02270324 to 02370333 has its CatchHandler @ 022703dc */
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar6,uVar7,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              uStack_38 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x30);
              uVar7 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_38);
              lVar8 = *(long *)(lVar6 + 0x10);
              lVar9 = *(long *)puVar3;
                    /* try { // try from 02270354 to 0237035b has its CatchHandler @ 022703d8 */
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              puVar5 = PTR_DAT_04cacc00;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                  thunk_FUN_02134474();
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar6,uVar7,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                lVar8 = *(long *)(lVar6 + 0x10);
                    /* try { // try from 022703b0 to 023703b7 has its CatchHandler @ 022703d4 */
                uVar7 = *(undefined8 *)puVar5;
                lVar9 = *(long *)puVar3;
                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022703b0 with catch @ 022703d4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270354 with catch @ 022703d8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270324 with catch @ 022703dc
                        */
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    /* try { // try from 022703e0 to 023703e7 has its CatchHandler @ 022703f0 */
                    *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                    thunk_FUN_02134474();
                    /* try { // try from 022703e8 to 023703f3 has its CatchHandler @ 022702f0 */
                  }
                  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022703e0 with catch @ 022703f0
                        */
                    /* try { // try from 022703f4 to 02370427 has its CatchHandler @ 022703f4
                       catch(type#1 @ 00000000) { ... } // from try @ 022703f4 with catch @ 022703f4
                       catch(type#1 @ 00000000) { ... } // from try @ 022705c8 with catch @ 022703f4
                        */
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar6,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar9 = *(long *)(*(long *)puVar4 + 0xb8);
                  lVar8 = *(long *)(lVar6 + 0x10);
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  puVar5 = PTR_DAT_04cacba0;
                  uVar7 = *(undefined8 *)(lVar9 + 0x28);
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 02270428 to 02370437 has its CatchHandler @ 022705bc */
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                      thunk_FUN_02134474();
                    }
                    else {
                    /* try { // try from 02270458 to 0237045f has its CatchHandler @ 022705b8 */
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar6,uVar7,
                                 *(undefined8 *)
                                  (*(long *)(*(long *)(*(long *)puVar3 + 0x20) + 0xc0) + 0x70));
                    }
                    lVar8 = *(long *)(lVar6 + 0x10);
                    uVar7 = *(undefined8 *)puVar5;
                    lVar9 = *(long *)puVar3;
                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar6 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                        thunk_FUN_02134474();
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                  (lVar6,uVar7,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                      }
                    /* try { // try from 022704c8 to 023704cf has its CatchHandler @ 022705a0 */
                      uStack_44 = 0;
                      uVar7 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_44);
                      lVar8 = *(long *)(lVar6 + 0x10);
                      lVar9 = *(long *)puVar3;
                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                      puVar5 = PTR_DAT_04cacb50;
                    /* try { // try from 022704e4 to 0237050b has its CatchHandler @ 022705a8 */
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(lVar6 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                          thunk_FUN_02134474();
                        }
                        else {
                    /* try { // try from 02270520 to 0237052b has its CatchHandler @ 022705a4 */
                          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                    (lVar6,uVar7,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        }
                        lVar8 = *(long *)(lVar6 + 0x10);
                        uVar7 = *(undefined8 *)puVar5;
                        lVar9 = *(long *)puVar3;
                        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                        if (lVar8 != 0) {
                    /* try { // try from 0227054c to 02370567 has its CatchHandler @ 022705b0 */
                          uVar1 = *(uint *)(lVar6 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                            *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                            thunk_FUN_02134474();
                          }
                          else {
                    /* try { // try from 02270578 to 0237057b has its CatchHandler @ 022705ac */
                    /* try { // try from 0227057c to 02370583 has its CatchHandler @ 022705b4 */
                            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                      (lVar6,uVar7,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          uStack_48 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x38);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022704c8 with catch @ 022705a0
                        */
                          uVar7 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_48);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270520 with catch @ 022705a4
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022704e4 with catch @ 022705a8
                        */
                          lVar8 = *(long *)(lVar6 + 0x10);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270578 with catch @ 022705ac
                        */
                          lVar9 = *(long *)puVar3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227054c with catch @ 022705b0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0227057c with catch @ 022705b4
                        */
                          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                          puVar5 = PTR_DAT_04cacc08;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270458 with catch @ 022705b8
                        */
                          if (lVar8 != 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270428 with catch @ 022705bc
                        */
                            uVar1 = *(uint *)(lVar6 + 0x18);
                    /* try { // try from 022705c0 to 023705c7 has its CatchHandler @ 022705d0 */
                    /* try { // try from 022705c8 to 023705d3 has its CatchHandler @ 022703f4 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022705c0 with catch @ 022705d0
                        */
                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                              *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                              thunk_FUN_02134474();
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                        (lVar6,uVar7,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            }
                            lVar8 = *(long *)(lVar6 + 0x10);
                            uVar7 = *(undefined8 *)puVar5;
                            lVar9 = *(long *)puVar3;
                            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar6 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                thunk_FUN_02134474();
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                          (lVar6,uVar7,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              uStack_4c = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x3c);
                              uVar7 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_4c);
                              lVar8 = *(long *)(lVar6 + 0x10);
                              lVar9 = *(long *)puVar3;
                              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                              puVar5 = PTR_DAT_04cacc18;
                              if (lVar8 != 0) {
                    /* try { // try from 02270690 to 023706c3 has its CatchHandler @ 02270690
                       catch(type#1 @ 00000000) { ... } // from try @ 02270690 with catch @ 02270690
                       catch(type#1 @ 00000000) { ... } // from try @ 02270788 with catch @ 02270690
                        */
                                uVar1 = *(uint *)(lVar6 + 0x18);
                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                  *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                  thunk_FUN_02134474();
                                }
                                else {
                    /* try { // try from 022706c4 to 023706d3 has its CatchHandler @ 0227077c */
                                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                            (lVar6,uVar7,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                }
                                lVar8 = *(long *)(lVar6 + 0x10);
                                uVar7 = *(undefined8 *)puVar5;
                                lVar9 = *(long *)puVar3;
                                *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                if (lVar8 != 0) {
                    /* try { // try from 022706f4 to 023706fb has its CatchHandler @ 02270778 */
                                  uVar1 = *(uint *)(lVar6 + 0x18);
                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                    *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                                    thunk_FUN_02134474();
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                              (lVar6,uVar7,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                  }
                                  uStack_50 = *(undefined4 *)
                                               (*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
                                  uVar7 = FUN_02133100(*(undefined8 *)(puVar2 + 0x48),&uStack_50);
                    /* try { // try from 02270750 to 02370757 has its CatchHandler @ 02270774 */
                                  lVar8 = *(long *)(lVar6 + 0x10);
                                  lVar9 = *(long *)puVar3;
                                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                  puVar4 = PTR_DAT_04cacc10;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar6 + 0x18);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270750 with catch @ 02270774
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022706f4 with catch @ 02270778
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022706c4 with catch @ 0227077c
                        */
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    /* try { // try from 02270780 to 02370787 has its CatchHandler @ 02270790 */
                    /* try { // try from 02270788 to 02370793 has its CatchHandler @ 02270690 */
                                      *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                      *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02270780 with catch @ 02270790
                        */
                                      thunk_FUN_02134474();
                    /* try { // try from 02270794 to 023707c7 has its CatchHandler @ 02270794
                       catch(type#1 @ 00000000) { ... } // from try @ 02270794 with catch @ 02270794
                       catch(type#1 @ 00000000) { ... } // from try @ 02270968 with catch @ 02270794
                        */
                                    }
                                    else {
                                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                (lVar6,uVar7,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                                );
                                    }
                                    lVar8 = *(long *)(lVar6 + 0x10);
                                    uVar7 = *(undefined8 *)puVar4;
                                    lVar9 = *(long *)puVar3;
                                    *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                    puVar4 = PTR_DAT_04cabaf8;
                                    if (lVar8 != 0) {
                    /* try { // try from 022707c8 to 023707d7 has its CatchHandler @ 0227095c */
                                      uVar1 = *(uint *)(lVar6 + 0x18);
                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                        *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                        *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7
                                        ;
                                        thunk_FUN_02134474();
                                      }
                                      else {
                    /* try { // try from 022707f8 to 023707ff has its CatchHandler @ 02270958 */
                                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                  (lVar6,uVar7,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                      }
                                      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                                        thunk_FUN_0218fdac();
                                      }
                                      uVar7 = Dino_BusSand_App_Meta_Profile__get_PlayerId_2274008(0)
                                      ;
                                      lVar8 = *(long *)(lVar6 + 0x10);
                                      lVar9 = *(long *)puVar3;
                                      *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                                      puVar4 = PTR_DAT_04cacbf8;
                                      puVar3 = PTR_DAT_04cacbf0;
                                      if (lVar8 != 0) {
                                        uVar1 = *(uint *)(lVar6 + 0x18);
                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    /* try { // try from 02270868 to 0237086f has its CatchHandler @ 02270940 */
                                          *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                                          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) =
                                               uVar7;
                                          thunk_FUN_02134474();
                                        }
                                        else {
                    /* try { // try from 02270884 to 023708ab has its CatchHandler @ 02270948 */
                                          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                    (lVar6,uVar7,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                        }
                                        System_Collections_Generic_List_object___AddRange_3a81e04
                                                  (lVar6,param_1,*(undefined8 *)puVar3);
                                        System_Collections_Generic_List_object___ToArray_3a83728
                                                  (lVar6,*(undefined8 *)puVar4);
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
                    }
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
                    /* try { // try from 022708c0 to 023708cb has its CatchHandler @ 02270944 */
  FUN_02133224();
}

