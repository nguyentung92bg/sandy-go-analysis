/* IL2CPP: Dino.BusSand.View.MechanicLayer$$get_ArtHighway
bool Dino_BusSand_View_MechanicLayer__get_ArtHighway (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.MechanicLayer$$get_ArtHighway
   bool Dino_BusSand_View_MechanicLayer__get_ArtHighway (const MethodInfo* method); */

uint Dino_BusSand_View_MechanicLayer__get_ArtHighway_23c35dc(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c9cb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c9cb = 1;
  }
  uVar3 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
  if ((uVar4 & 1) == 0) {
                    /* try { // try from 024c372c to 025c3737 has its CatchHandler @ 024c37fc */
    return 0;
  }
  lVar5 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
  if (lVar5 != 0) {
    uVar3 = *(undefined8 *)(lVar5 + 0xd8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar1);
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    lVar5 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
    if (lVar5 != 0) {
      uVar3 = *(undefined8 *)(lVar5 + 0xe0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      lVar5 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
      if (lVar5 != 0) {
                    /* try { // try from 024c36c0 to 025c36c7 has its CatchHandler @ 024c3814 */
        uVar3 = *(undefined8 *)(lVar5 + 0xe8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 024c36d0 to 025c36d7 has its CatchHandler @ 024c3810 */
          thunk_FUN_0218fdac(*(long *)puVar1);
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar3,0,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        lVar5 = Dino_BusSand_View_ArtPack__get_Data_238ddf0(0);
                    /* try { // try from 024c36f0 to 025c36f7 has its CatchHandler @ 024c37f8 */
        if (lVar5 != 0) {
          uVar3 = *(undefined8 *)(lVar5 + 0xf0);
                    /* try { // try from 024c3700 to 025c370b has its CatchHandler @ 024c3800 */
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac(*(long *)puVar1);
          }
                    /* try { // try from 024c370c to 025c3717 has its CatchHandler @ 024c37f4 */
          puVar1 = PTR_DAT_04ca9ae8;
          if ((bRam0000000004fa8638 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04ca9ae8,0,0);
            bRam0000000004fa8638 = 1;
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar2 = UnityEngine_Object__CompareBaseObjects_43c6f94(uVar3,0);
          return (uVar2 ^ 0xffffffff) & 1;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

