/* IL2CPP: Dino.BusSand.App.GameApp$$Boot
System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__Boot (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.GameApp$$Boot
   System_Collections_IEnumerator_o* Dino_BusSand_App_GameApp__Boot (Dino_BusSand_App_GameApp_o*
   __this, const MethodInfo* method); */

long Dino_BusSand_App_GameApp__Boot_2165774(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cac540;
  if ((bRam0000000004f9b85a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac540);
                    /* try { // try from 022657a0 to 023657b3 has its CatchHandler @ 02265830 */
    bRam0000000004f9b85a = 1;
  }
  lVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  Dino_BusSand_App_GameApp__Boot_d__84___ctor_216b628(lVar2,0,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_1;
    thunk_FUN_02134474((undefined8 *)(lVar2 + 0x20),param_1);
                    /* try { // try from 022657d4 to 023657df has its CatchHandler @ 02265818 */
                    /* try { // try from 022657e0 to 02365853 has its CatchHandler @ 02265654 */
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

