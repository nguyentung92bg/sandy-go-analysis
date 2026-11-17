/* IL2CPP: Dino.BusSand.AudioHub$$Load
void Dino_BusSand_AudioHub__Load (Dino_BusSand_AudioHub_o* __this, System_String_o* json, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$Load
   void Dino_BusSand_AudioHub__Load (Dino_BusSand_AudioHub_o* __this, System_String_o* json, const
   MethodInfo* method); */

void Dino_BusSand_AudioHub__Load_23738e8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_118;
  undefined8 *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  long lStack_90;
  long lStack_78;
  
  if ((bRam0000000004f9c7e5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    FUN_02132f7c(PTR_DAT_04cbb100);
    FUN_02132f7c(PTR_DAT_04ca9af8);
    FUN_02132f7c(PTR_DAT_04cbb108);
    FUN_02132f7c(PTR_DAT_04cbb110);
    FUN_02132f7c(PTR_DAT_04cacd40);
    FUN_02132f7c(PTR_DAT_04cbb118);
    FUN_02132f7c(PTR_DAT_04cbb120);
    FUN_02132f7c(PTR_DAT_04cbb128);
                    /* try { // try from 02473994 to 02573aab has its CatchHandler @ 02473994
                       catch() { ... } // from try @ 02473994 with catch @ 02473994
                       catch() { ... } // from try @ 02473ab4 with catch @ 02473994
                       catch() { ... } // from try @ 02473b00 with catch @ 02473994
                       catch() { ... } // from try @ 02473b28 with catch @ 02473994
                       catch() { ... } // from try @ 02473b4c with catch @ 02473994 */
    FUN_02132f7c(PTR_DAT_04cbb130);
    FUN_02132f7c(PTR_DAT_04cbb138);
    FUN_02132f7c(PTR_DAT_04cbb140);
    FUN_02132f7c(PTR_DAT_04cbb148);
    FUN_02132f7c(PTR_DAT_04cbb150);
    FUN_02132f7c(PTR_DAT_04cbb158);
    FUN_02132f7c(PTR_DAT_04cbb160);
    FUN_02132f7c(PTR_DAT_04cbb168);
    FUN_02132f7c(PTR_DAT_04cbb170);
    FUN_02132f7c(PTR_DAT_04cbb178);
    FUN_02132f7c(PTR_DAT_04cbb180);
    FUN_02132f7c(PTR_DAT_04cbb188);
    FUN_02132f7c(PTR_DAT_04cbb190);
    FUN_02132f7c(PTR_DAT_04cbb198);
    FUN_02132f7c(PTR_DAT_04cbb1a0);
    FUN_02132f7c(PTR_DAT_04cbb1a8);
    FUN_02132f7c(PTR_DAT_04cb1848);
    FUN_02132f7c(PTR_DAT_04cb1850);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cab020);
    FUN_02132f7c(PTR_DAT_04cbb1b0);
    FUN_02132f7c(PTR_DAT_04cbb1b8);
    bRam0000000004f9c7e5 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  uStack_a0 = 0;
  puStack_98 = (undefined8 *)0x0;
  lStack_90 = 0;
                    /* try { // try from 02473aac to 02573ab3 has its CatchHandler @ 02473b08 */
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  lStack_b0 = 0;
                    /* try { // try from 02473ab4 to 02573afb has its CatchHandler @ 02473994 */
  uStack_d0 = 0;
  lStack_d8 = 0;
  lStack_e0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  lStack_78 = 0;
  if (param_2 == 0) {
    lVar7 = UnityEngine_Resources__Load_object__2891e2c
                      (*(undefined8 *)PTR_DAT_04cbb1b0,*(undefined8 *)PTR_DAT_04cab020);
    lVar10 = *(long *)puVar1;
    if (*(int *)(lVar10 + 0xe4) == 0) {
                    /* try { // try from 02473afc to 02573aff has its CatchHandler @ 02473b04 */
      thunk_FUN_0218fdac(lVar10);
    }
                    /* try { // try from 02473b00 to 02573b23 has its CatchHandler @ 02473994 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02473afc with catch @ 02473b04
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02473aac with catch @ 02473b08
                        */
    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
    param_2 = 0;
    if ((uVar8 & 1) != 0) {
      if (lVar7 == 0) goto LAB_02474010;
                    /* try { // try from 02473b24 to 02573b27 has its CatchHandler @ 02473b40 */
      param_2 = UnityEngine_TextAsset__get_text_43c62e8(lVar7,0);
                    /* try { // try from 02473b28 to 02573b43 has its CatchHandler @ 02473994 */
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 02473b24 with catch @ 02473b40 */
                    /* try { // try from 02473b44 to 02573b4b has its CatchHandler @ 02473b54 */
    uVar8 = UnityEngine_Object__op_Equality_43c6f30(lVar7,0,0);
                    /* try { // try from 02473b4c to 02573b57 has its CatchHandler @ 02473994 */
    if ((uVar8 & 1) != 0) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02473b44 with catch @ 02473b54
                        */
                    /* try { // try from 02473b58 to 02573cb3 has its CatchHandler @ 02473b58
                       catch() { ... } // from try @ 02473b58 with catch @ 02473b58
                       catch() { ... } // from try @ 02473cf0 with catch @ 02473b58
                       catch() { ... } // from try @ 02473e04 with catch @ 02473b58
                       catch() { ... } // from try @ 02473e30 with catch @ 02473b58
                       catch() { ... } // from try @ 02473e54 with catch @ 02473b58 */
      if (*(int *)(*(long *)PTR_DAT_04ca9af8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_Debug__LogWarning_4357a30(*(undefined8 *)PTR_DAT_04cbb1b8,0);
    }
    if (param_2 != 0) goto LAB_02473b80;
                    /* try { // try from 02473ff4 to 02573ffb has its CatchHandler @ 02474004 */
                    /* try { // try from 02473ffc to 02574007 has its CatchHandler @ 02473e60 */
    lVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cbb100);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02473ff4 with catch @ 02474004
                        */
    Dino_BusSand_AudioTable___ctor_2372980();
  }
  else {
LAB_02473b80:
    lVar7 = UnityEngine_JsonUtility__FromJson_object__27dae58
                      (param_2,*(undefined8 *)PTR_DAT_04cbb188);
  }
  if (param_1 != 0) {
    plVar11 = (long *)(param_1 + 0x20);
    *plVar11 = lVar7;
    thunk_FUN_02134474(plVar11,lVar7);
    if (*(long *)(param_1 + 0x28) != 0) {
      System_Collections_Generic_Dictionary_object__object___Clear_34b452c
                (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cbb108);
      puVar6 = PTR_DAT_04cbb160;
      puVar5 = PTR_DAT_04cbb158;
      puVar4 = PTR_DAT_04cbb150;
      puVar3 = PTR_DAT_04cbb130;
      puVar2 = PTR_DAT_04cbb128;
      puVar1 = PTR_DAT_04cab1f0;
      if ((*plVar11 != 0) && (lVar7 = *(long *)(*plVar11 + 0x20), lVar7 != 0)) {
        System_Collections_Generic_List_object___GetEnumerator_3a825f0
                  (&uStack_118,lVar7,*(undefined8 *)PTR_DAT_04cbb1a8);
        lStack_90 = lStack_108;
        puStack_98 = puStack_110;
        uStack_a0 = uStack_118;
        uStack_118 = 0;
        puStack_110 = &uStack_a0;
        while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                 (&uStack_a0,*(undefined8 *)puVar6), lVar7 = lStack_90,
              (uVar8 & 1) != 0) {
          if ((lStack_90 != 0) &&
             (uVar8 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lStack_90 + 0x10),0),
             (uVar8 & 1) == 0)) {
            lVar10 = *(long *)(param_1 + 0x28);
            uVar12 = *(undefined8 *)(lVar7 + 0x10);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            uVar12 = Dino_BusSand_AudioHub__Norm_2374274(uVar12);
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224(uVar12,uVar12);
            }
            System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                      (lVar10,uVar12,lVar7,*(undefined8 *)puVar3);
            uVar8 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(lVar7 + 0x18),0);
            if ((uVar8 & 1) == 0) {
              lVar10 = *(long *)(param_1 + 0x28);
              uVar12 = *(undefined8 *)(lVar7 + 0x18);
                    /* try { // try from 02473cb4 to 02573cbb has its CatchHandler @ 02473e10 */
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              uVar12 = Dino_BusSand_AudioHub__Norm_2374274(uVar12);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224(uVar12,uVar12);
              }
              System_Collections_Generic_Dictionary_object__object___set_Item_34b4390
                        (lVar10,uVar12,lVar7,*(undefined8 *)puVar3);
            }
          }
        }
                    /* try { // try from 02473ce8 to 02573cef has its CatchHandler @ 02473e08 */
                    /* try { // try from 02473cf0 to 02573dff has its CatchHandler @ 02473b58 */
        System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                  (&uStack_a0,*(undefined8 *)PTR_DAT_04cbb138);
        if (*(long *)(param_1 + 0x30) != 0) {
          System_Collections_Generic_Dictionary_object__float___Clear_34b7ca0
                    (*(long *)(param_1 + 0x30),*(undefined8 *)PTR_DAT_04cbb110);
          if ((*plVar11 != 0) && (lVar7 = *(long *)(*plVar11 + 0x18), lVar7 != 0)) {
            System_Collections_Generic_List_object___GetEnumerator_3a825f0
                      (&uStack_118,lVar7,*(undefined8 *)PTR_DAT_04cbb1a0);
            lStack_b0 = lStack_108;
            puStack_b8 = puStack_110;
            uStack_c0 = uStack_118;
            uStack_118 = 0;
            puStack_110 = &uStack_c0;
            while (uVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext_35d6598
                                     (&uStack_c0,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
              if (lStack_b0 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar7 = *(long *)(param_1 + 0x30);
              uVar12 = *(undefined8 *)(lStack_b0 + 0x10);
              if (*(char *)(lStack_b0 + 0x1c) == '\0') {
                fVar14 = *(float *)(lStack_b0 + 0x18);
                if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(0);
                }
                func_0x049b5300(0x41200000,fVar14 / 20.0);
              }
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              System_Collections_Generic_Dictionary_object__float___set_Item_34b7b00
                        (lVar7,uVar12,*(undefined8 *)puVar2);
            }
            System_Collections_Generic_List_Enumerator_object___Dispose_35d6594
                      (&uStack_c0,*(undefined8 *)PTR_DAT_04cbb140);
            puVar4 = PTR_DAT_04cbb120;
            puVar3 = PTR_DAT_04cb1850;
            puVar2 = PTR_DAT_04ca9ae8;
            if (*(long *)(param_1 + 0x40) != 0) {
              System_Collections_Generic_HashSet_object___Clear_37e59fc
                        (*(long *)(param_1 + 0x40),*(undefined8 *)PTR_DAT_04cbb180);
              if (*(long *)(param_1 + 0xc0) != 0) {
                    /* try { // try from 02473e00 to 02573e03 has its CatchHandler @ 02473e0c */
                    /* try { // try from 02473e04 to 02573e2b has its CatchHandler @ 02473b58 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02473ce8 with catch @ 02473e08
                        */
                System_Collections_Generic_Dictionary_object__object___Clear_34b452c
                          (*(long *)(param_1 + 0xc0),*(undefined8 *)PTR_DAT_04cacd40);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02473e00 with catch @ 02473e0c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02473cb4 with catch @ 02473e10
                        */
                if (*(long *)(param_1 + 0x70) != 0) {
                  System_Collections_Generic_Dictionary_object__object___GetEnumerator_34b47d8
                            (&uStack_118,*(long *)(param_1 + 0x70),*(undefined8 *)PTR_DAT_04cbb118);
                    /* try { // try from 02473e2c to 02573e2f has its CatchHandler @ 02473e48 */
                    /* try { // try from 02473e30 to 02573e4b has its CatchHandler @ 02473b58 */
                  uStack_d0 = uStack_f8;
                  puStack_e8 = puStack_110;
                  uStack_f0 = uStack_118;
                  lStack_d8 = lStack_100;
                  lStack_e0 = lStack_108;
                  uStack_118 = 0;
                  puStack_110 = &uStack_f0;
                  while( true ) {
                    do {
                      do {
                    /* catch() { ... } // from try @ 02473e2c with catch @ 02473e48 */
                    /* try { // try from 02473e4c to 02573e53 has its CatchHandler @ 02473e5c */
                        uVar8 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext_3645d38
                                          (&uStack_f0,*(undefined8 *)puVar5);
                        lVar7 = lStack_d8;
                    /* try { // try from 02473e54 to 02573e5f has its CatchHandler @ 02473b58 */
                        if ((uVar8 & 1) == 0) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02473f5c with catch @ 02473fb8
                        */
                          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose_3645e58
                                    (&uStack_f0,*(undefined8 *)PTR_DAT_04cbb148);
                    /* try { // try from 02473fd4 to 02573fd7 has its CatchHandler @ 02473ff0 */
                    /* try { // try from 02473fd8 to 02573ff3 has its CatchHandler @ 02473e60 */
                    /* catch() { ... } // from try @ 02473fd4 with catch @ 02473ff0 */
                          return;
                        }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02473e4c with catch @ 02473e5c
                        */
                        if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                    /* try { // try from 02473e60 to 02573f5b has its CatchHandler @ 02473e60
                       catch() { ... } // from try @ 02473e60 with catch @ 02473e60
                       catch() { ... } // from try @ 02473f64 with catch @ 02473e60
                       catch() { ... } // from try @ 02473fb0 with catch @ 02473e60
                       catch() { ... } // from try @ 02473fd8 with catch @ 02473e60
                       catch() { ... } // from try @ 02473ffc with catch @ 02473e60 */
                        uVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue_34b5f0c
                                          (*(long *)(param_1 + 0x28),lStack_e0,&lStack_78,
                                           *(undefined8 *)puVar4);
                      } while ((uVar8 & 1) == 0);
                      if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                    } while ((*(long *)(lStack_78 + 0x80) == 0) ||
                            (*(int *)(*(long *)(lStack_78 + 0x80) + 0x18) == 0));
                    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    *(long *)(lVar7 + 0x18) = lStack_78;
                    thunk_FUN_02134474();
                    if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    if (*(long *)(lStack_78 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    fVar14 = *(float *)(lStack_78 + 0x38);
                    lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                                       (*(long *)(lStack_78 + 0x80),0,*(undefined8 *)puVar3);
                    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    fVar15 = *(float *)(lVar10 + 0x20);
                    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                      thunk_FUN_0218fdac(*(long *)puVar1);
                    }
                    uVar13 = func_0x049b5300(0x41200000,(fVar14 + fVar15) / 20.0);
                    *(undefined4 *)(lVar7 + 0x20) = uVar13;
                    if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    if (*(long *)(lStack_78 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_02133224();
                    }
                    lVar10 = System_Collections_Generic_List_object___get_Item_3a81924
                                       (*(long *)(lStack_78 + 0x80),0,*(undefined8 *)puVar3);
                    if (lVar10 == 0) break;
                    uVar12 = Dino_BusSand_AudioHub__Clip_23742fc
                                       (param_1,*(undefined8 *)(lVar10 + 0x10));
                    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                      thunk_FUN_0218fdac();
                    }
                    uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,0,0);
                    if ((uVar8 & 1) != 0) {
                      if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                        FUN_02133224();
                      }
                      uVar9 = UnityEngine_AudioSource__get_clip_434866c(*(long *)(lVar7 + 0x10),0);
                    /* try { // try from 02473f5c to 02573f63 has its CatchHandler @ 02473fb8 */
                      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                        thunk_FUN_0218fdac();
                      }
                    /* try { // try from 02473f64 to 02573fab has its CatchHandler @ 02473e60 */
                      uVar8 = UnityEngine_Object__op_Inequality_43c8dec(uVar12,uVar9,0);
                      if ((uVar8 & 1) != 0) {
                        if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                        uVar8 = UnityEngine_AudioSource__get_isPlaying_4348a28
                                          (*(long *)(lVar7 + 0x10),0);
                        if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_02133224();
                        }
                        UnityEngine_AudioSource__set_clip_434875c(*(long *)(lVar7 + 0x10),uVar12,0);
                        if ((uVar8 & 1) != 0) {
                          if (*(long *)(lVar7 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_02133224();
                          }
                    /* try { // try from 02473fac to 02573faf has its CatchHandler @ 02473fb4 */
                    /* try { // try from 02473fb0 to 02573fd3 has its CatchHandler @ 02473e60 */
                          UnityEngine_AudioSource__Play_4348894(*(long *)(lVar7 + 0x10),0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02473fac with catch @ 02473fb4
                        */
                        }
                      }
                    }
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_02133224();
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02474010:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

