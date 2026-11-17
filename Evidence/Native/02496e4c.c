/* IL2CPP: Dino.BusSand.View.Fx$$get_I
Dino_BusSand_View_Fx_o* Dino_BusSand_View_Fx__get_I (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.Fx$$get_I
   Dino_BusSand_View_Fx_o* Dino_BusSand_View_Fx__get_I (const MethodInfo* method); */

undefined8 Dino_BusSand_View_Fx__get_I_2396e4c(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cbc100;
  if ((bRam0000000004f9c8e6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cbc100);
                    /* try { // try from 02496e74 to 02596f63 has its CatchHandler @ 02496e74
                       catch() { ... } // from try @ 02496e74 with catch @ 02496e74
                       catch() { ... } // from try @ 02496f6c with catch @ 02496e74
                       catch() { ... } // from try @ 02497378 with catch @ 02496e74
                       catch() { ... } // from try @ 024973e4 with catch @ 02496e74
                       catch() { ... } // from try @ 02497414 with catch @ 02496e74
                       catch() { ... } // from try @ 0249748c with catch @ 02496e74
                       catch() { ... } // from try @ 024974f0 with catch @ 02496e74 */
    bRam0000000004f9c8e6 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return **(undefined8 **)(lVar2 + 0xb8);
}

