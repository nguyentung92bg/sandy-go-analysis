/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$.cctor
void Dino_BusSand_Cheat_AutoPlayHand___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.Cheat.AutoPlayHand$$.cctor
   void Dino_BusSand_Cheat_AutoPlayHand___cctor (const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoPlayHand___cctor_2340958(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  
  puVar2 = PTR_DAT_04cb9550;
  if ((bRam0000000004f9c67c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb9550);
    bRam0000000004f9c67c = 1;
  }
  uVar1 = _UNK_00e6b760;
                    /* try { // try from 0244098c to 02540a63 has its CatchHandler @ 0244098c
                       catch() { ... } // from try @ 0244098c with catch @ 0244098c
                       catch() { ... } // from try @ 02440bac with catch @ 0244098c
                       catch() { ... } // from try @ 02440cd0 with catch @ 0244098c
                       catch() { ... } // from try @ 02440d08 with catch @ 0244098c
                       catch() { ... } // from try @ 02440d5c with catch @ 0244098c
                       catch() { ... } // from try @ 02440d84 with catch @ 0244098c */
  puVar3 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
  puVar3[1] = _UNK_00e6b768;
  *puVar3 = uVar1;
  return;
}

