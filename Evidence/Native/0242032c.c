/* IL2CPP: Dino.BusSand.App.UI.HomeQueue$$Why
System_String_o* Dino_BusSand_App_UI_HomeQueue__Why (Dino_BusSand_App_GameApp_o* app, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeQueue$$Why
   System_String_o* Dino_BusSand_App_UI_HomeQueue__Why (Dino_BusSand_App_GameApp_o* app, const
   MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HomeQueue__Why_232032c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  byte abStack_24 [4];
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c5ac & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04caa038);
    FUN_02132f7c(PTR_DAT_04cacc38);
    FUN_02132f7c(PTR_DAT_04cac518);
    FUN_02132f7c(PTR_DAT_04cac7c8);
    FUN_02132f7c(PTR_DAT_04cb8988);
    FUN_02132f7c(PTR_DAT_04cb8990);
    FUN_02132f7c(PTR_DAT_04cb8998);
    FUN_02132f7c(PTR_DAT_04cb89a0);
    FUN_02132f7c(PTR_DAT_04cb89a8);
    FUN_02132f7c(PTR_DAT_04cb89b0);
    FUN_02132f7c(PTR_DAT_04cb89b8);
    bRam0000000004f9c5ac = 1;
  }
  abStack_24[0] = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(param_1,0,0);
  if ((uVar2 & 1) != 0) {
LAB_02420448:
    return *(undefined8 *)PTR_DAT_04cb89b0;
  }
  if (param_1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar4,0,0);
    if ((uVar2 & 1) != 0) goto LAB_02420448;
    lVar5 = *(long *)(param_1 + 0x28);
    lVar3 = FUN_02133068(*(undefined8 *)PTR_DAT_04caa038,0xc);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)PTR_DAT_04cb8998;
        thunk_FUN_02134474();
        abStack_24[0] = *(byte *)(param_1 + 0x39);
        if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0x28) + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
                    /* try { // try from 024204bc to 025204e3 has its CatchHandler @ 02420690 */
        uVar4 = System_Boolean__ToString_47b93d0(abStack_24,0);
        if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) != 0) {
          *(undefined8 *)(lVar3 + 0x28) = uVar4;
          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x28),uVar4);
          if (2 < *(uint *)(lVar3 + 0x18)) {
            *(undefined8 *)(lVar3 + 0x30) = *(undefined8 *)PTR_DAT_04cb8988;
            thunk_FUN_02134474();
            if (lVar5 == 0) goto LAB_02420730;
            abStack_24[0] = Dino_BusSand_App_UI_UIManager__AnyPopupOpen_21fef84(lVar5,0);
            abStack_24[0] = abStack_24[0] & 1;
                    /* try { // try from 02420520 to 02520547 has its CatchHandler @ 0242068c */
            uVar4 = System_Boolean__ToString_47b93d0(abStack_24,0);
            if ((*(uint *)(lVar3 + 0x18) & 0xfffffffc) != 0) {
              *(undefined8 *)(lVar3 + 0x38) = uVar4;
              thunk_FUN_02134474((undefined8 *)(lVar3 + 0x38),uVar4);
                    /* try { // try from 02420550 to 02520557 has its CatchHandler @ 02420680 */
              if (4 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 02420558 to 025205bb has its CatchHandler @ 02420688 */
                *(undefined8 *)(lVar3 + 0x40) = *(undefined8 *)PTR_DAT_04cb8990;
                thunk_FUN_02134474();
                if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
                  thunk_FUN_0218fdac();
                }
                abStack_24[0] = Dino_BusSand_App_UI_ScreenFade__get_Busy_2289848(0);
                abStack_24[0] = abStack_24[0] & 1;
                uVar4 = System_Boolean__ToString_47b93d0(abStack_24,0);
                if (5 < *(uint *)(lVar3 + 0x18)) {
                  *(undefined8 *)(lVar3 + 0x48) = uVar4;
                  thunk_FUN_02134474((undefined8 *)(lVar3 + 0x48),uVar4);
                    /* try { // try from 024205c4 to 025205c7 has its CatchHandler @ 02420684 */
                    /* try { // try from 024205c8 to 02520667 has its CatchHandler @ 024202e0 */
                  if (6 < *(uint *)(lVar3 + 0x18)) {
                    *(undefined8 *)(lVar3 + 0x50) = *(undefined8 *)PTR_DAT_04cb89a0;
                    thunk_FUN_02134474((undefined8 *)(lVar3 + 0x50));
                    abStack_24[0] =
                         Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                   (lVar5,*(undefined8 *)PTR_DAT_04cac518);
                    abStack_24[0] = abStack_24[0] & 1;
                    uVar4 = System_Boolean__ToString_47b93d0(abStack_24,0);
                    if ((*(uint *)(lVar3 + 0x18) & 0xfffffff8) != 0) {
                      *(undefined8 *)(lVar3 + 0x58) = uVar4;
                      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x58),uVar4);
                      if (8 < *(uint *)(lVar3 + 0x18)) {
                        *(undefined8 *)(lVar3 + 0x60) = *(undefined8 *)PTR_DAT_04cb89a8;
                        thunk_FUN_02134474((undefined8 *)(lVar3 + 0x60));
                    /* try { // try from 02420668 to 0252066b has its CatchHandler @ 02420694 */
                    /* try { // try from 0242066c to 0252066f has its CatchHandler @ 0242067c */
                        abStack_24[0] =
                             Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                       (lVar5,*(undefined8 *)PTR_DAT_04cacc38);
                    /* try { // try from 02420670 to 025206af has its CatchHandler @ 024202e0 */
                        abStack_24[0] = abStack_24[0] & 1;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0242066c with catch @ 0242067c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02420550 with catch @ 02420680
                        */
                        uVar4 = System_Boolean__ToString_47b93d0(abStack_24,0);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024205c4 with catch @ 02420684
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02420558 with catch @ 02420688
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02420520 with catch @ 0242068c
                        */
                        if (9 < *(uint *)(lVar3 + 0x18)) {
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 024204bc with catch @ 02420690
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02420668 with catch @ 02420694
                        */
                          *(undefined8 *)(lVar3 + 0x68) = uVar4;
                          thunk_FUN_02134474((undefined8 *)(lVar3 + 0x68),uVar4);
                          if (10 < *(uint *)(lVar3 + 0x18)) {
                    /* try { // try from 024206b0 to 025206b3 has its CatchHandler @ 024206c0 */
                    /* catch() { ... } // from try @ 024206b0 with catch @ 024206c0 */
                            *(undefined8 *)(lVar3 + 0x70) = *(undefined8 *)PTR_DAT_04cb89b8;
                    /* try { // try from 024206c4 to 025206cb has its CatchHandler @ 024206d4 */
                            thunk_FUN_02134474((undefined8 *)(lVar3 + 0x70));
                    /* try { // try from 024206cc to 025206d7 has its CatchHandler @ 024202e0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 024206c4 with catch @ 024206d4
                        */
                            abStack_24[0] =
                                 Dino_BusSand_App_UI_UIManager__IsOpen_object__2945298
                                           (lVar5,*(undefined8 *)PTR_DAT_04cac7c8);
                            abStack_24[0] = abStack_24[0] & 1;
                            uVar4 = System_Boolean__ToString_47b93d0(abStack_24,0);
                            if (0xb < *(uint *)(lVar3 + 0x18)) {
                              *(undefined8 *)(lVar3 + 0x78) = uVar4;
                              thunk_FUN_02134474();
                              uVar4 = System_String__Concat_46d31f0(lVar3,0);
                              return uVar4;
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
      FUN_0213322c();
    }
  }
LAB_02420730:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

