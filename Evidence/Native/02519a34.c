/* IL2CPP: Dino.BusSand.Core.SandPalette$$Scale
uint8_t Dino_BusSand_Core_SandPalette__Scale (uint8_t c, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandPalette$$Scale
   uint8_t Dino_BusSand_Core_SandPalette__Scale (uint8_t c, float k, const MethodInfo* method); */

int Dino_BusSand_Core_SandPalette__Scale_2419a34(float param_1,byte param_2)

{
  double dVar1;
  double dVar2;
  double dStack_18;
  
  if ((bRam0000000004f9cb86 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9cb86 = 1;
  }
  param_1 = ((float)param_2 / 255.0) * param_1;
  if (param_1 <= 0.0) {
    return 0;
  }
  if (1.0 <= param_1) {
    return 0xff;
  }
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  dVar2 = (double)(param_1 * 255.0);
  dVar1 = (double)FUN_049b52f0(dVar2,&dStack_18);
  if (0.0 <= param_1 * 255.0) {
    if (dVar1 != 0.5) {
                    /* try { // try from 02519b30 to 02619b3f has its CatchHandler @ 02519c68 */
      dStack_18 = (double)(long)(dVar2 + 0.5);
      goto LAB_02519b34;
    }
                    /* try { // try from 02519b04 to 02619b07 has its CatchHandler @ 02519c3c */
    dVar1 = 1.0;
                    /* try { // try from 02519b08 to 02619b0f has its CatchHandler @ 02519c4c */
  }
  else {
    if (dVar1 != -0.5) {
                    /* try { // try from 02519b20 to 02619b23 has its CatchHandler @ 02519c44 */
                    /* try { // try from 02519b24 to 02619b2f has its CatchHandler @ 02519c50 */
      dStack_18 = (double)(long)(dVar2 + -0.5);
      goto LAB_02519b34;
    }
    dVar1 = -1.0;
                    /* try { // try from 02519ae4 to 02619aeb has its CatchHandler @ 02519c6c */
  }
  if (((long)dStack_18 & 1U) != 0) {
    dStack_18 = dStack_18 + dVar1;
  }
LAB_02519b34:
                    /* try { // try from 02519b40 to 02619b5b has its CatchHandler @ 02519c70 */
  return (int)dStack_18;
}

