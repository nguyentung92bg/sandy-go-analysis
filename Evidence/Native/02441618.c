/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Guard
System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__Guard (Dino_BusSand_Cheat_AutoQa_o* __this, System_Collections_IEnumerator_o* body, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$Guard
   System_Collections_IEnumerator_o* Dino_BusSand_Cheat_AutoQa__Guard (Dino_BusSand_Cheat_AutoQa_o*
   __this, System_Collections_IEnumerator_o* body, const MethodInfo* method); */

long Dino_BusSand_Cheat_AutoQa__Guard_2341618(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cb95c0;
                    /* try { // try from 0244161c to 02541623 has its CatchHandler @ 024416a8 */
                    /* try { // try from 02441630 to 0254163b has its CatchHandler @ 024416a4 */
  if ((bRam0000000004f9c68b & 1) == 0) {
                    /* try { // try from 02441644 to 0254164f has its CatchHandler @ 02441698 */
    FUN_02132f7c(PTR_DAT_04cb95c0);
    bRam0000000004f9c68b = 1;
  }
                    /* try { // try from 02441654 to 02541663 has its CatchHandler @ 02441694 */
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
                    /* try { // try from 02441664 to 02541687 has its CatchHandler @ 02441548 */
  System_Object___ctor_4870e5c(lVar2,0);
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x28) = param_1;
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x28),param_1);
  *(undefined8 *)(lVar2 + 0x20) = param_2;
                    /* try { // try from 02441688 to 0254168b has its CatchHandler @ 024416a0 */
  thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_2);
                    /* try { // try from 0244168c to 0254168f has its CatchHandler @ 0244169c */
                    /* try { // try from 02441690 to 025416bb has its CatchHandler @ 02441548 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02441654 with catch @ 02441694
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 02441644 with catch @ 02441698
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0244168c with catch @ 0244169c
                        */
  return lVar2;
}

