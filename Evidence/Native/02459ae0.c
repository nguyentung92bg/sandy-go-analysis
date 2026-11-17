/* IL2CPP: Dino.BusSand.Cheat.CheatConfig$$DefaultBindings
System_Collections_Generic_List_CheatBinding__o* Dino_BusSand_Cheat_CheatConfig__DefaultBindings (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatConfig$$DefaultBindings
   System_Collections_Generic_List_CheatBinding__o* Dino_BusSand_Cheat_CheatConfig__DefaultBindings
   (const MethodInfo* method); */

long Dino_BusSand_Cheat_CheatConfig__DefaultBindings_2359ae0(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04cba370;
  puVar3 = PTR_DAT_04cba368;
  puVar2 = PTR_DAT_04cba360;
                    /* try { // try from 02459afc to 02559b03 has its CatchHandler @ 02459c04 */
  if ((bRam0000000004f9c724 & 1) == 0) {
                    /* try { // try from 02459b10 to 02559b1f has its CatchHandler @ 02459c08 */
    FUN_02132f7c(PTR_DAT_04cba370);
                    /* try { // try from 02459b20 to 02559c23 has its CatchHandler @ 02459750 */
    FUN_02132f7c(PTR_DAT_04cba378);
    FUN_02132f7c(PTR_DAT_04cba368);
    FUN_02132f7c(PTR_DAT_04cba360);
    bRam0000000004f9c724 = 1;
  }
  lVar5 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
  System_Collections_Generic_List_object____ctor_3a8138c(lVar5,*(undefined8 *)puVar3);
  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
  Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,0,0x125,0,0,0);
  puVar2 = PTR_DAT_04cba378;
  if (lVar5 != 0) {
    lVar8 = *(long *)(lVar5 + 0x10);
    lVar9 = *(long *)PTR_DAT_04cba378;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *puVar7 = uVar6;
        thunk_FUN_02134474(puVar7,uVar6);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
      }
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02459afc with catch @ 02459c04
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02459b10 with catch @ 02459c08
                        */
      Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,1,0x121,0,0,0);
      lVar8 = *(long *)(lVar5 + 0x10);
      lVar9 = *(long *)puVar2;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (lVar8 != 0) {
                    /* try { // try from 02459c24 to 02559c27 has its CatchHandler @ 02459c48 */
        uVar1 = *(uint *)(lVar5 + 0x18);
                    /* try { // try from 02459c28 to 02559c4b has its CatchHandler @ 02459750 */
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
          puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
          *puVar7 = uVar6;
                    /* catch() { ... } // from try @ 02459c24 with catch @ 02459c48 */
          thunk_FUN_02134474(puVar7,uVar6);
                    /* try { // try from 02459c4c to 02559c53 has its CatchHandler @ 02459c5c */
        }
        else {
                    /* try { // try from 02459c54 to 02559c5f has its CatchHandler @ 02459750 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02459c4c with catch @ 02459c5c
                        */
          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                    (lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
        }
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
        Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,2,0x120,0,0,0);
        lVar8 = *(long *)(lVar5 + 0x10);
        lVar9 = *(long *)puVar2;
        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
        if (lVar8 != 0) {
          uVar1 = *(uint *)(lVar5 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
            puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
            *puVar7 = uVar6;
            thunk_FUN_02134474(puVar7,uVar6);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                      (lVar5,uVar6,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                      );
          }
          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
          Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,3,0x31,1,0,0);
          lVar8 = *(long *)(lVar5 + 0x10);
          lVar9 = *(long *)puVar2;
          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
          if (lVar8 != 0) {
            uVar1 = *(uint *)(lVar5 + 0x18);
            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
              *puVar7 = uVar6;
              thunk_FUN_02134474(puVar7,uVar6);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                        (lVar5,uVar6,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
            Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,4,0x32,1,0,0);
            lVar8 = *(long *)(lVar5 + 0x10);
            lVar9 = *(long *)puVar2;
            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
            if (lVar8 != 0) {
              uVar1 = *(uint *)(lVar5 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                *puVar7 = uVar6;
                thunk_FUN_02134474(puVar7,uVar6);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                          (lVar5,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
              }
              uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
              Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,5,0x33,1,0,0);
              lVar8 = *(long *)(lVar5 + 0x10);
              lVar9 = *(long *)puVar2;
              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar5 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                  puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar7 = uVar6;
                  thunk_FUN_02134474(puVar7,uVar6);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                            (lVar5,uVar6,
                             *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                }
                uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,6,0x75,1,1,0);
                lVar8 = *(long *)(lVar5 + 0x10);
                lVar9 = *(long *)puVar2;
                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                    *puVar7 = uVar6;
                    thunk_FUN_02134474(puVar7,uVar6);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                              (lVar5,uVar6,
                               *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                  Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,7,0x11c,0,0,0);
                  lVar8 = *(long *)(lVar5 + 0x10);
                  lVar9 = *(long *)puVar2;
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar8 != 0) {
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                      puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar7 = uVar6;
                      thunk_FUN_02134474(puVar7,uVar6);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                (lVar5,uVar6,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                    }
                    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                    Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,8,0x113,0,0,0);
                    lVar8 = *(long *)(lVar5 + 0x10);
                    lVar9 = *(long *)puVar2;
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar8 != 0) {
                      uVar1 = *(uint *)(lVar5 + 0x18);
                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                        puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                        *puVar7 = uVar6;
                        thunk_FUN_02134474(puVar7,uVar6);
                      }
                      else {
                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                  (lVar5,uVar6,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                  );
                      }
                      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                      Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,9,0x114,0,0,0);
                      lVar8 = *(long *)(lVar5 + 0x10);
                      lVar9 = *(long *)puVar2;
                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                      if (lVar8 != 0) {
                        uVar1 = *(uint *)(lVar5 + 0x18);
                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                          puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                          *puVar7 = uVar6;
                          thunk_FUN_02134474(puVar7,uVar6);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                    (lVar5,uVar6,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                        }
                        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                        Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,10,0x6c,1,0,0);
                        lVar8 = *(long *)(lVar5 + 0x10);
                        lVar9 = *(long *)puVar2;
                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                        if (lVar8 != 0) {
                          uVar1 = *(uint *)(lVar5 + 0x18);
                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                            puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                            *puVar7 = uVar6;
                            thunk_FUN_02134474(puVar7,uVar6);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                      (lVar5,uVar6,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                          }
                          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                          Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,0xb,0x11a,0,0,0);
                          lVar8 = *(long *)(lVar5 + 0x10);
                          lVar9 = *(long *)puVar2;
                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                          if (lVar8 != 0) {
                            uVar1 = *(uint *)(lVar5 + 0x18);
                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                              puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                              *puVar7 = uVar6;
                              thunk_FUN_02134474(puVar7,uVar6);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                        (lVar5,uVar6,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                            }
                            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                            Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,0xc,0x11b,0,0,0);
                            lVar8 = *(long *)(lVar5 + 0x10);
                            lVar9 = *(long *)puVar2;
                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                            if (lVar8 != 0) {
                              uVar1 = *(uint *)(lVar5 + 0x18);
                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                *puVar7 = uVar6;
                                thunk_FUN_02134474(puVar7,uVar6);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                          (lVar5,uVar6,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                              }
                              uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                              Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,0xd,0x72,1,1,0);
                              lVar8 = *(long *)(lVar5 + 0x10);
                              lVar9 = *(long *)puVar2;
                              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                              if (lVar8 != 0) {
                                uVar1 = *(uint *)(lVar5 + 0x18);
                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                  puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                  *puVar7 = uVar6;
                                  thunk_FUN_02134474(puVar7,uVar6);
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                            (lVar5,uVar6,
                                             *(undefined8 *)
                                              (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                }
                                uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                                Dino_BusSand_Cheat_CheatBinding___ctor_2359720(uVar6,0xe,0x20,0,0,0)
                                ;
                                lVar8 = *(long *)(lVar5 + 0x10);
                                lVar9 = *(long *)puVar2;
                                *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                if (lVar8 != 0) {
                                  uVar1 = *(uint *)(lVar5 + 0x18);
                                  if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                    puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                    *puVar7 = uVar6;
                                    thunk_FUN_02134474(puVar7,uVar6);
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                              (lVar5,uVar6,
                                               *(undefined8 *)
                                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                                  }
                                  uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                                  Dino_BusSand_Cheat_CheatBinding___ctor_2359720
                                            (uVar6,0xf,0x111,0,0,0);
                                  lVar8 = *(long *)(lVar5 + 0x10);
                                  lVar9 = *(long *)puVar2;
                                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                  if (lVar8 != 0) {
                                    uVar1 = *(uint *)(lVar5 + 0x18);
                                    if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                      puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                      *puVar7 = uVar6;
                                      thunk_FUN_02134474(puVar7,uVar6);
                                    }
                                    else {
                                      System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                (lVar5,uVar6,
                                                 *(undefined8 *)
                                                  (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70)
                                                );
                                    }
                                    uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                                    Dino_BusSand_Cheat_CheatBinding___ctor_2359720
                                              (uVar6,0x10,0x112,0,0,0);
                                    lVar8 = *(long *)(lVar5 + 0x10);
                                    lVar9 = *(long *)puVar2;
                                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                    if (lVar8 != 0) {
                                      uVar1 = *(uint *)(lVar5 + 0x18);
                                      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                        puVar7 = (undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20)
                                        ;
                                        *puVar7 = uVar6;
                                        thunk_FUN_02134474(puVar7,uVar6);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                  (lVar5,uVar6,
                                                   *(undefined8 *)
                                                    (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                    0x70));
                                      }
                                      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                                      Dino_BusSand_Cheat_CheatBinding___ctor_2359720
                                                (uVar6,0x11,0x11f,0,0,0);
                                      lVar8 = *(long *)(lVar5 + 0x10);
                                      lVar9 = *(long *)puVar2;
                                      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                      if (lVar8 != 0) {
                                        uVar1 = *(uint *)(lVar5 + 0x18);
                                        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                          *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                          puVar7 = (undefined8 *)
                                                   (lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                          *puVar7 = uVar6;
                                          thunk_FUN_02134474(puVar7,uVar6);
                                        }
                                        else {
                                          System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                    (lVar5,uVar6,
                                                     *(undefined8 *)
                                                      (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                      0x70));
                                        }
                                        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                                        Dino_BusSand_Cheat_CheatBinding___ctor_2359720
                                                  (uVar6,0x12,0x11f,0,1,0);
                                        lVar8 = *(long *)(lVar5 + 0x10);
                                        lVar9 = *(long *)puVar2;
                                        *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                        if (lVar8 != 0) {
                                          uVar1 = *(uint *)(lVar5 + 0x18);
                                          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                            *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                            puVar7 = (undefined8 *)
                                                     (lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                            *puVar7 = uVar6;
                                            thunk_FUN_02134474(puVar7,uVar6);
                                          }
                                          else {
                                            System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                      (lVar5,uVar6,
                                                       *(undefined8 *)
                                                        (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) +
                                                        0x70));
                                          }
                                          uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                                          Dino_BusSand_Cheat_CheatBinding___ctor_2359720
                                                    (uVar6,0x13,0x68,0,0,0);
                                          lVar8 = *(long *)(lVar5 + 0x10);
                                          lVar9 = *(long *)puVar2;
                                          *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                          if (lVar8 != 0) {
                                            uVar1 = *(uint *)(lVar5 + 0x18);
                                            if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                              *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                              puVar7 = (undefined8 *)
                                                       (lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                              *puVar7 = uVar6;
                                              thunk_FUN_02134474(puVar7,uVar6);
                                            }
                                            else {
                                              System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                        (lVar5,uVar6,
                                                         *(undefined8 *)
                                                          (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                          + 0x70));
                                            }
                                            uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                                            Dino_BusSand_Cheat_CheatBinding___ctor_2359720
                                                      (uVar6,0x14,0x75,0,0,0);
                                            lVar8 = *(long *)(lVar5 + 0x10);
                                            lVar9 = *(long *)puVar2;
                                            *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                            if (lVar8 != 0) {
                                              uVar1 = *(uint *)(lVar5 + 0x18);
                                              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                puVar7 = (undefined8 *)
                                                         (lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                                *puVar7 = uVar6;
                                                thunk_FUN_02134474(puVar7,uVar6);
                                              }
                                              else {
                                                System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                          (lVar5,uVar6,
                                                           *(undefined8 *)
                                                            (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                      0xc0) + 0x70));
                                              }
                                              uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar4);
                                              Dino_BusSand_Cheat_CheatBinding___ctor_2359720
                                                        (uVar6,0x15,0x11e,0,0,0);
                                              lVar8 = *(long *)(lVar5 + 0x10);
                                              lVar9 = *(long *)puVar2;
                                              *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                                              if (lVar8 != 0) {
                                                uVar1 = *(uint *)(lVar5 + 0x18);
                                                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                                                  *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                                                  puVar7 = (undefined8 *)
                                                           (lVar8 + (long)(int)uVar1 * 8 + 0x20);
                                                  *puVar7 = uVar6;
                                                  thunk_FUN_02134474(puVar7,uVar6);
                                                }
                                                else {
                                                  System_Collections_Generic_List_object___AddWithResize_3a81bf4
                                                            (lVar5,uVar6,
                                                             *(undefined8 *)
                                                              (*(long *)(*(long *)(lVar9 + 0x20) +
                                                                        0xc0) + 0x70));
                                                }
                                                return lVar5;
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
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

