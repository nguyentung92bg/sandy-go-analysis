/* IL2CPP: Dino.BusSand.App.Meta.HallQueue$$.ctor
void Dino_BusSand_App_Meta_HallQueue___ctor (Dino_BusSand_App_Meta_HallQueue_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.HallQueue$$.ctor
   void Dino_BusSand_App_Meta_HallQueue___ctor (Dino_BusSand_App_Meta_HallQueue_o* __this, const
   MethodInfo* method); */

undefined1  [16] Dino_BusSand_App_Meta_HallQueue___ctor_2240824(ulong param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = PTR_DAT_04cb3798;
  puVar1 = PTR_DAT_04cb3790;
  if ((bRam0000000004f9befc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb3798);
    FUN_02132f7c(PTR_DAT_04cb3790);
                    /* try { // try from 0234086c to 02440917 has its CatchHandler @ 0234086c
                       catch() { ... } // from try @ 0234086c with catch @ 0234086c
                       catch() { ... } // from try @ 02340aec with catch @ 0234086c
                       catch() { ... } // from try @ 02340c50 with catch @ 0234086c
                       catch() { ... } // from try @ 02340c9c with catch @ 0234086c
                       catch() { ... } // from try @ 02340d20 with catch @ 0234086c */
    bRam0000000004f9befc = 1;
  }
  uVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Collections_Generic_List_HallQueue_Cmd____ctor_3b3cf94(uVar3,*(undefined8 *)puVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x10),uVar3);
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  return auVar4;
}

