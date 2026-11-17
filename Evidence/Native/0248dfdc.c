/* IL2CPP: Dino.BusSand.View.PackPalette$$Reset
void Dino_BusSand_View_PackPalette__Reset (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.PackPalette$$Reset
   void Dino_BusSand_View_PackPalette__Reset (const MethodInfo* method); */

void Dino_BusSand_View_PackPalette__Reset_238dfdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  if ((bRam0000000004f9c8b8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbbf50);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    bRam0000000004f9c8b8 = 1;
  }
  puVar2 = PTR_DAT_04cbbf50;
  puVar1 = PTR_DAT_04cb70d8;
  lVar6 = 0x20;
  lVar7 = 0x20;
  do {
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar4 = *(long *)(lVar3 + 0xb8);
    lVar5 = *(long *)(lVar4 + 0x10);
    if (lVar5 == 0) {
LAB_0248e0f4:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
                    /* try { // try from 0248e050 to 0258e057 has its CatchHandler @ 0248e09c */
    uVar8 = lVar7 - 0x20;
                    /* try { // try from 0248e058 to 0258e05b has its CatchHandler @ 0248e090 */
                    /* try { // try from 0248e05c to 0258e05f has its CatchHandler @ 0248e088 */
    if ((long)*(int *)(lVar5 + 0x18) <= (long)uVar8) {
                    /* try { // try from 0248e0b8 to 0258e0bb has its CatchHandler @ 0248e0c4 */
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
                    /* catch() { ... } // from try @ 0248e0b8 with catch @ 0248e0c4 */
        lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      }
                    /* try { // try from 0248e0c8 to 0258e0cf has its CatchHandler @ 0248e0d8 */
      if (*(long *)(lVar4 + 0x48) != 0) {
                    /* try { // try from 0248e0d0 to 0258e0db has its CatchHandler @ 0248dcc0 */
        System_Collections_Generic_Dictionary_Color32__Color___Clear_33b091c
                  (*(long *)(lVar4 + 0x48),*(undefined8 *)puVar2);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0248e0c8 with catch @ 0248e0d8
                        */
        *(undefined1 *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x40) = 0;
        return;
      }
      goto LAB_0248e0f4;
    }
                    /* try { // try from 0248e060 to 0258e063 has its CatchHandler @ 0248e080 */
    if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* try { // try from 0248e064 to 0258e067 has its CatchHandler @ 0248e07c */
      thunk_FUN_0218fdac();
                    /* try { // try from 0248e068 to 0258e0b7 has its CatchHandler @ 0248dcc0 */
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
      lVar5 = *(long *)(lVar4 + 0x10);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0248df70 with catch @ 0248e074
                        */
      if (lVar5 == 0) goto LAB_0248e0f4;
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0248df80 with catch @ 0248e078
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0248e064 with catch @ 0248e07c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0248e060 with catch @ 0248e080
                        */
    if (*(uint *)(lVar5 + 0x18) <= uVar8) {
LAB_0248e0f8:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0248df50 with catch @ 0248e084
                        */
    lVar3 = *(long *)(lVar4 + 0x18);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0248e05c with catch @ 0248e088
                        */
    *(undefined1 *)(lVar5 + lVar7) = 0;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0248df40 with catch @ 0248e08c
                        */
    if (lVar3 == 0) goto LAB_0248e0f4;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0248e058 with catch @ 0248e090
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0248dee0 with catch @ 0248e094
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0248de7c with catch @ 0248e098
                        */
    if (*(uint *)(lVar3 + 0x18) <= uVar8) goto LAB_0248e0f8;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0248e050 with catch @ 0248e09c
                        */
    *(undefined8 *)(lVar3 + lVar6) = 0;
    thunk_FUN_02134474(lVar3 + lVar6,0);
    lVar7 = lVar7 + 1;
    lVar6 = lVar6 + 8;
  } while( true );
}

