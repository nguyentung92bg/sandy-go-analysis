/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature.<>c$$.cctor
void Dino_BusSand_App_Meta_BattleRoyaleFeature___c___cctor (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.BattleRoyaleFeature.<>c$$.cctor
   void Dino_BusSand_App_Meta_BattleRoyaleFeature___c___cctor (const MethodInfo* method); */

void Dino_BusSand_App_Meta_BattleRoyaleFeature___c___cctor_2226fb4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_DAT_04cb2ca0;
  if ((bRam0000000004f9bde7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb2ca0);
    bRam0000000004f9bde7 = 1;
  }
                    /* try { // try from 02326fe8 to 02426feb has its CatchHandler @ 02327020 */
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 02326fec to 02426fef has its CatchHandler @ 0232701c */
                    /* try { // try from 02326ff0 to 02426ff3 has its CatchHandler @ 02327018 */
                    /* try { // try from 02326ff4 to 02426ff7 has its CatchHandler @ 02327014 */
  System_Object___ctor_4870e5c(uVar2,0);
                    /* try { // try from 02326ff8 to 02426ffb has its CatchHandler @ 02327008 */
                    /* try { // try from 02326ffc to 0242704b has its CatchHandler @ 02326c34 */
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = uVar2;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326ff8 with catch @ 02327008
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326e7c with catch @ 0232700c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326eb0 with catch @ 02327010
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326ff4 with catch @ 02327014
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02326ff0 with catch @ 02327018
                        */
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0xc & 0x3f),
                 (*(ulong *)(*(long *)puVar1 + 0xb8) >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

