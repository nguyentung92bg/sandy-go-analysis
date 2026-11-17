/* IL2CPP: Dino.BusSand.App.Meta.HallQueue.<RunAll>d__8$$MoveNext
bool Dino_BusSand_App_Meta_HallQueue__RunAll_d__8__MoveNext (Dino_BusSand_App_Meta_HallQueue__RunAll_d__8_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.HallQueue.<RunAll>d__8$$MoveNext
   bool Dino_BusSand_App_Meta_HallQueue__RunAll_d__8__MoveNext
   (Dino_BusSand_App_Meta_HallQueue__RunAll_d__8_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Meta_HallQueue__RunAll_d__8__MoveNext_224098c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_68;
  long *aplStack_60 [2];
  undefined4 uStack_50;
  long lStack_48;
  
                    /* try { // try from 023409ac to 024409b3 has its CatchHandler @ 02340c58 */
  lStack_48 = param_1;
  if ((bRam0000000004f9beff & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb37a8);
    FUN_02132f7c(PTR_DAT_04cb2e78);
                    /* try { // try from 023409d4 to 024409df has its CatchHandler @ 02340c54 */
    FUN_02132f7c(PTR_DAT_04cb2e80);
    FUN_02132f7c(PTR_DAT_04cb37b0);
                    /* try { // try from 023409ec to 024409fb has its CatchHandler @ 02340c50 */
    FUN_02132f7c(PTR_DAT_04cb2e90);
    FUN_02132f7c(PTR_DAT_04cb37b8);
    FUN_02132f7c(PTR_DAT_04cb37c0);
    FUN_02132f7c(PTR_DAT_04cb37a0);
    bRam0000000004f9beff = 1;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  aplStack_60[0] = &lStack_48;
  uStack_50 = 0;
  lStack_68 = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    puVar7 = (undefined8 *)PTR_DAT_04cb2e78;
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x10) != 0) goto LAB_02340c9c;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    puVar2 = PTR_DAT_04cb37a0;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224(0);
    }
                    /* try { // try from 02340a54 to 02440aeb has its CatchHandler @ 02340c6c */
    lVar8 = *(long *)(lVar10 + 0x10);
    lVar4 = *(long *)PTR_DAT_04cb37a0;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)puVar2;
    }
    puVar7 = *(undefined8 **)(lVar4 + 0xb8);
    lVar9 = puVar7[1];
    if (lVar9 == 0) {
      if (*(int *)(lVar4 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        puVar7 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
      }
      uVar3 = *puVar7;
      lVar9 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cb37a8);
      System_Comparison_HallQueue_Cmd____ctor_332a514(lVar9,uVar3,*(undefined8 *)PTR_DAT_04cb37c0,0)
      ;
      plVar5 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
      *plVar5 = lVar9;
      thunk_FUN_02134474(plVar5,lVar9);
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_HallQueue_Cmd___Sort_3b3f54c
              (lVar8,lVar9,*(undefined8 *)PTR_DAT_04cb37b8);
                    /* try { // try from 02340aec to 02440c37 has its CatchHandler @ 0234086c */
    if (*(long *)(lVar10 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    System_Collections_Generic_List_HallQueue_Cmd___GetEnumerator_3b3e3ac
              (&uStack_d0,*(long *)(lVar10 + 0x10),*(undefined8 *)PTR_DAT_04cb2e90);
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_98 = uStack_c8;
    uStack_a0 = uStack_d0;
    uStack_88 = uStack_b8;
    uStack_90 = uStack_c0;
    *(undefined8 *)(lStack_48 + 0x30) = uStack_c8;
    *(undefined8 *)(lStack_48 + 0x28) = uStack_d0;
    *(undefined8 *)(lStack_48 + 0x40) = uStack_b8;
    *(undefined8 *)(lStack_48 + 0x38) = uStack_c0;
    *(undefined8 *)(lStack_48 + 0x50) = uStack_a8;
    *(undefined8 *)(lStack_48 + 0x48) = uStack_b0;
    thunk_FUN_02134474(lStack_48 + 0x28,0);
    *(undefined4 *)(lStack_48 + 0x10) = 0xfffffffd;
    puVar7 = (undefined8 *)PTR_DAT_04cb2e78;
  }
  do {
    uVar6 = System_Collections_Generic_List_Enumerator_HallQueue_Cmd___MoveNext_3611124
                      (lStack_48 + 0x28,*puVar7);
    if ((uVar6 & 1) == 0) {
      Dino_BusSand_App_Meta_HallQueue__RunAll_d__8____m__Finally1_2240d90();
                    /* try { // try from 02340c4c to 02440c4f has its CatchHandler @ 02340c5c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023409ec with catch @ 02340c50
                       try { // try from 02340c50 to 02440c83 has its CatchHandler @ 0234086c */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023409d4 with catch @ 02340c54
                        */
      *(undefined8 *)(lStack_48 + 0x30) = 0;
      *(undefined8 *)(lStack_48 + 0x28) = 0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023409ac with catch @ 02340c58
                        */
      *(undefined8 *)(lStack_48 + 0x40) = 0;
      *(undefined8 *)(lStack_48 + 0x38) = 0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02340c4c with catch @ 02340c5c
                        */
      *(undefined8 *)(lStack_48 + 0x50) = 0;
      *(undefined8 *)(lStack_48 + 0x48) = 0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02340918 with catch @ 02340c60
                        */
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02340c38 with catch @ 02340c64
                        */
      lVar10 = *(long *)(lVar10 + 0x10);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02340960 with catch @ 02340c68
                        */
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02340a54 with catch @ 02340c6c
                        */
      iVar1 = *(int *)(lVar10 + 0x18);
      *(undefined4 *)(lVar10 + 0x18) = 0;
      *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
      if (iVar1 < 1) {
        uVar3 = 0;
      }
      else {
                    /* try { // try from 02340c84 to 02440c9b has its CatchHandler @ 02340d18 */
        System_Array__Clear_4851dc8(*(undefined8 *)(lVar10 + 0x10),0,iVar1,0);
        uVar3 = 0;
      }
      goto LAB_02340c9c;
    }
    lVar4 = *(long *)(lStack_48 + 0x48);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar4 = (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28))
    ;
  } while (lVar4 == 0);
  *(long *)(lStack_48 + 0x18) = lVar4;
  thunk_FUN_02134474();
                    /* try { // try from 02340c38 to 02440c3b has its CatchHandler @ 02340c64 */
  uVar3 = 1;
  *(undefined4 *)(lStack_48 + 0x10) = 1;
LAB_02340c9c:
                    /* try { // try from 02340c9c to 02440d07 has its CatchHandler @ 0234086c */
  lVar10 = lStack_68;
  if (lStack_68 != 0) {
    FUN_01e7908c(aplStack_60);
                    /* WARNING: Subroutine does not return */
    FUN_0213321c(lVar10);
  }
  return uVar3;
}

